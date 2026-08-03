class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> mp;
        for(int i=0;i<indices.size();i++){
            mp[indices[i]]=s[i];
        }
        string ns;
        for(auto const& x:mp){
            ns.push_back(x.second);
        }
        return ns;
    }
};