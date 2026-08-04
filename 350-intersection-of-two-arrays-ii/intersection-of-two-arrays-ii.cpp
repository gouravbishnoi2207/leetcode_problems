class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> result;
        for(int x:nums1){
            mp[x]++;
        }
        for(int y:nums2){
            if(mp.find(y)!=mp.end() && mp[y]>0){
                result.push_back(y);
                mp[y]--;
            }
        }
       return result;
    }
};