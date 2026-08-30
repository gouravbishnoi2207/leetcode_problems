class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitsum = 0;
        int squaresum = 0;
        while(n>0){
            int r = n%10;
            digitsum+=r;
            squaresum+=r*r;
            n/=10;
        }
        return squaresum - digitsum >= 50;
    }
};