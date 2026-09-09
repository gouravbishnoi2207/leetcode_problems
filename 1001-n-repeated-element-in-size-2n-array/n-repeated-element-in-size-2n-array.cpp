class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size()/2;
        for(int x:nums){
            mp[x]++;
            if(mp[x]==n){
                return x;
            }
        }
        return 0;
    }
};