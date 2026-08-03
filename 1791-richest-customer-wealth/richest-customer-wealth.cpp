class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int amt=0;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<accounts[0].size();j++){
                amt+=accounts[i][j];
            }
            ans=max(ans,amt);
            amt=0;
        }
        return ans;
    }
};