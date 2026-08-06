class Solution {
public:
    int smallestNumber(int n, int t) {
        while(n<=100){
            int temp=n;
            int p=1;
            while(temp>0){
            int r=temp%10;
            p=p*r;
            temp=temp/10;
            if(p%t==0){
                return n;
            }
            }
            n++;
                  }

        return 0;
    }
};