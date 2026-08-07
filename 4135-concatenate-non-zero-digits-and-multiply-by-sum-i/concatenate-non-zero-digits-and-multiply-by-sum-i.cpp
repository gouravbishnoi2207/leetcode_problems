class Solution {
public:
    long long sumAndMultiply(int n) {
        stack<int> st;
        long long x=0;
        long long sum=0;
        while(n>0){
            int r=n%10;
            if(r!=0){
            st.push(r);}
            n=n/10;
        }
        while(!st.empty()){
            sum+=st.top();
           x=st.top()+(x*10);
           st.pop();
        }
    return 1ll*x*sum;
    }
};