class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int tmaxi=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                tmaxi+=1;
                maxi=max(maxi,tmaxi);
                }
                else{
                    tmaxi=0;
                }
            }
        return maxi;
    }
};