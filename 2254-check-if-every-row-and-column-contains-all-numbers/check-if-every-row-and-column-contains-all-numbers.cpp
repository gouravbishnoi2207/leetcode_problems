class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size(); 
        for(int i=0;i<n;i++){
            unordered_set<int> st;
            for(int j=0;j<n;j++){
                st.insert(matrix[i][j]);
            }
            if(st.size()!=matrix.size()){
                return false;
            }
        }
         for(int j=0;j<n;j++){
            unordered_set<int> st;
            for(int i=0;i<n;i++){
                st.insert(matrix[i][j]);
            }
            if(st.size()!=matrix.size()){
                return false;
            }
        }
        return true;
    }
};