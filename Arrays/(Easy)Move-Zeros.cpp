class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int lnz=0,i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[lnz++],nums[i]);
            }
        }
    }
};
