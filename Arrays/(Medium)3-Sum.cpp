class Solution {
public:
    void check_add(set<vector<int>>& res,vector<int>& temp){
        if(accumulate(temp.begin(),temp.end(),0)==0){
            vector <int>t = temp;
            sort(t.begin(),t.end());
            res.insert(t);
        }
        return;
    }
    void recur(set<vector<int>>& res,vector<int>& nums, vector<int>& temp,int index){
        if(index==nums.size()){
            return;
        }
        temp.push_back(nums[index]);
        if(temp.size()==3){
            check_add(res,temp);
        }
        recur(res,nums,temp,index+1);
        temp.pop_back();
        recur(res,nums,temp,index+1);
        return;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        vector<int>temp;
        vector<vector<int>> ans;
        recur(res,nums,temp,0);
        for(auto i=res.begin();i!=res.end();i++){
            ans.push_back(*i);
        }
        return ans;
    }
};
