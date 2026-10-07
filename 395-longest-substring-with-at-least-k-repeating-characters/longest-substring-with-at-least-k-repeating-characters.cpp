class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        int ans = 0;
        for(int unique=1; unique<=26; unique++){
            vector<int> freq(26,0);
            int left = 0;
            int right = 0;
            int countatleastk = 0;
            int uniquecount = 0;
            while(right < n){
                int idx = s[right] - 'a';
                if(freq[idx] == 0){
                    uniquecount++;
                }
                freq[idx]++;
                if(freq[idx] == k){
                    countatleastk++;
                }
                right++;
                while(uniquecount > unique){
                    int remove = s[left] - 'a';
                    if(freq[remove] == k){
                        countatleastk--;
                    }
                    freq[remove]--;
                    if(freq[remove] == 0){
                        uniquecount--;
                    }
                    left++;
                }
                if(unique == uniquecount && uniquecount == countatleastk){
                    ans = max(ans , right - left);
                }
            }
        }
        return ans;
    }
};