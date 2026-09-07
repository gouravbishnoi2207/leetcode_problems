class Solution {
public:
    vector<vector<int>> ans;
    void helper(int idx,int r,vector<int>& candidates,vector<int> &temp){
        if(r==0){
            ans.push_back(temp);
            return;
        }
        if(r<0 || idx == candidates.size()){
            return;
        }
            temp.push_back(candidates[idx]);
            helper(idx,r-candidates[idx],candidates,temp);
            temp.pop_back();
            helper(idx+1,r,candidates,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        helper(0,target,candidates,temp);
        return ans;
    }
};