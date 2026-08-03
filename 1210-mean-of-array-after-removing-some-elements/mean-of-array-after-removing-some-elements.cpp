class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size();
        int r=n*0.05;
        int sum=0;
        sort(arr.begin(),arr.end());
        for(int i=r;i<n-r;i++){
          sum+=arr[i];
        }
        int ns=n-2*r;
        double mean=(double(sum)/ns);
        return mean;
    }
};