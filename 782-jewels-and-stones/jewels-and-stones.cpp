class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        int count=0;
       for(int i=0; i<jewels.size(); i++){
         mp[jewels[i]]++;
       } 
       for(int j=0; j<stones.size(); j++){
        if(mp.find(stones[j])!=mp.end()){
            count++;
        }
       }
       return count;
    }
};