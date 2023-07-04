class Solution {
public:
    int count=0;
    bool isdiv(vector<int>& temp, int k){
        int sum=0;
        if(temp.size()==0){
            return false;
        }
        for(int i=0;i<temp.size();i++){
            sum=sum+temp[i];
        }
        if(sum%k==0){
            return true;
        }
        else{
            return false;
        }
    }
    void recur(vector<int>& temp, vector<int>& nums, int index, int start,int k){
        if(index==nums.size()){
            return;
        }
        temp.push_back(nums[index]);
        if(isdiv(temp,k)){
            count++;
        }
        //temp.push_back(nums[index]);
        recur(temp,nums,index+1,start,k);
    }
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            temp={};
            recur(temp,nums,i,i,k);
        }
        return count;
    }
};
