class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        int j=0;
        int k=0;
         arr1.push_back(nums[0]);
            arr2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
           if(arr1[j]>arr2[k]){
            arr1.push_back(nums[i]);
            j++;
           }
           else{
            arr2.push_back(nums[i]);
            k++;
           }
        }
        vector<int> result;
        for(int i=0;i<arr1.size();i++){
            result.push_back(arr1[i]);
        }
        for(int i=0;i<arr2.size();i++){
            result.push_back(arr2[i]);
        }
        return result;
    }
};