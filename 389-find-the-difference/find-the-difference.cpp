class Solution {
public:
    char findTheDifference(string s, string t) {
      if(s.size()==0)
      for(char x:t){
        return x;
      }  
     unordered_map<char,int> m;
     for(int x:s){
        m[x]++;
     }
     for(int i:t){
        m[i]--;
     if(m[i]<0){
        return i;
     }
     }
     return 0;
    }
};