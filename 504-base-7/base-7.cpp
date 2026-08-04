class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        string s;
        string rs;
        int temp=abs(num);
        while(temp>0){
            int r=temp%7;
            s.push_back(r+'0');
            temp=temp/7;
        }
        for(int i=s.size()-1;i>=0;i--){
          rs.push_back(s[i]);
        }
if(num<0){
   rs = "-" + rs;
}
return rs;
    }
};