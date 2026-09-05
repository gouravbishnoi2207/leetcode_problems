class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> arr(2);
      int n=nums.size();
      for(int i=1;i<=n;i++){
        mp[i]++;
      }
      for(int x:nums){
        mp[x]--;
      }
      for(auto const&x:mp){
        if(x.second<0){
            arr[0]=x.first;
        }
        if(x.second>0){
            arr[1]=x.first;
        }
      }
        return arr;
    }
};