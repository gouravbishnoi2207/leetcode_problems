class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int x:arr1){
            mp[x]++;
        }
        for(int x:arr2){
            if(mp.find(x)!=mp.end()){
                while(mp[x]>0){
                    ans.push_back(x);
                    mp[x]--;
                }
            }
        }
       vector<int> dans;
       for(int x:arr1){
            if(mp[x]>0){
                dans.push_back(x);
            }
        }
        sort(dans.begin(),dans.end());
       for(int x:dans){
        ans.push_back(x);
       }
       return ans; 
    }
};