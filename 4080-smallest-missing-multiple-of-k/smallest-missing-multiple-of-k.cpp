class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int l=nums[0];
        for(int i=1; i<nums.size(); i++){
            if(l<nums[i]){
                l=nums[i];
            }
        }
        unordered_map<int,int> mp;
        for(int y:nums){
            mp[y]++;
        }
        vector<int> m;
        int x=l/k;
        for(int j=1; j<=x+1; j++){
           m.push_back(k*j);
        }
        for(int z:m){
            if(mp.find(z)==mp.end()){
                return z;
            }
        }
        return 0;
    }
};