class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0){
            return 0;
        }
        int count = 0;
       unordered_map<int,int> mp;
       for(int num:nums){
        mp[num]++;
       } 
       for(const auto& [num,freq]:mp){
        if(k==0){
            if(freq>1){
                count++;
            }
        }
        else{
            if(mp.find(num+k)!=mp.end()){
                count++;
            }
        }
       }
       return count;
    }
};