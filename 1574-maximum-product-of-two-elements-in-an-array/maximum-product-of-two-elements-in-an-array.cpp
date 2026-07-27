class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(nums[i]>nums[j]){
            swap(nums[i],nums[j]);
        }
     }}
      int result=(nums[n-2]-1)*(nums[n-1]-1);
      return result;  
    }
};