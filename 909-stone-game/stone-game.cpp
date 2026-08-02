class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int aT=0;
        int bT=0;
        while(n==0){
            for(int i=0;i<(n/2);i++){
                for(int j=n-1;j>(n/2);j--){
                if(piles[i+1]>piles[j-1]){
                    aT+=piles[j];
                    bT+=piles[i];
                }
                else{
                    aT+=piles[i];
                    bT+=piles[j];
                }
                
            }
        }
    }
    if(aT<bT){
        return false;
    }
    return true;
    }
};