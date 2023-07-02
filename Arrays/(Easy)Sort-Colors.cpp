class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        int start=0;
        int end=nums.size()-1;
        int pivot=0;
        while(pivot<=end){
            if(nums[pivot]==0){
                swap(nums[pivot],nums[start]);
                start++; pivot++;
            }
            else if(nums[pivot]==1){
                pivot++;
            }
            else{
                swap(nums[pivot],nums[end]);
                end--; 
            }
        }    
    }
};
