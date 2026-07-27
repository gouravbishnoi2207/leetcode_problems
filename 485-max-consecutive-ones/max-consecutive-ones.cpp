class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int o=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                o+=1;}
                else{
                    v.push_back(o);
                    o=0;
                }
            }
            v.push_back(o);
        sort(v.begin(),v.end());
        int x=v.size();
        return v[x-1];
    }
};