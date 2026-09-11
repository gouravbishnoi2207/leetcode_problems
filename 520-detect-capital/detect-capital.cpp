class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int count=0;
        for(char c:word){
            if(isupper(c)){
                count++;
            }
        }
        if(isupper(word[0]) && count==1){
            return true;
        }
        else if(count==n||count==0){
            return true;
        }
        return false;
    }
};