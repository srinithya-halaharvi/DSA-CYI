class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                break;
            }
        }
        return nums[i];
    }
    //use sum method for better approach, used this cuz I already used sum method previous time
};
