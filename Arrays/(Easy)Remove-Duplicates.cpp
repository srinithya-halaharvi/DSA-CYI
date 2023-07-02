class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1){
            return nums.size();
        }
        int k=0;
        int temp[nums.size()];
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]!=nums[i]){
                cout<<"in";
                temp[k++]=nums[i];
            }
        }
        temp[k++]=nums[nums.size()-1];
        for (int i = 0; i < k; i++){
            nums[i] = temp[i];
        }
        return k;
    }
};
