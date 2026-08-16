class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int m=0;
        int j=0;
        for(int i=0;i<s.size();i++){
             mp[s[i]]++;
          while(mp[s[i]]>1){
            mp[s[j]]--;
            j++;
          }
        m=max(m,i-j+1);
        }
       return m;
    }
};