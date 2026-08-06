class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        int temp =n;
        int d=0;
        while(temp>0){
          temp=temp/10;
          d++;
            }
        while(n>0){
            int x=n%10;
            if(d%2==0){
                x=-x;
            }
            sum=sum+(x);
            n=n/10;
            d--;
        }
        return sum;
    }
};