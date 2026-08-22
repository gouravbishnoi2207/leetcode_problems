class Solution {
public:
    string addStrings(string num1, string num2) {
       int i=num1.size()-1; 
       int j=num2.size()-1;
       int carry=0;
       string ns="";
       while(i>=0||j>=0||carry>0){
        int sum=carry;
        if(i>=0){
          int ld1=num1[i]-'0';
          sum+=ld1;
          i--;
          }
          if(j>=0){
          int ld2=num2[j]-'0';
          sum+=ld2;
          j--;
          }
          carry=sum/10;
         ns=ns+to_string(sum%10);
       }
       std::reverse(ns.begin(),ns.end());
       return ns;
    }
};