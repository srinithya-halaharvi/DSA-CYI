class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=INT_MAX;
        int maxPro=0;
        for(int i=0;i<prices.size();i++){
            b = min(b, prices[i]);
            maxPro = max(maxPro, prices[i] - b);
        }
        return maxPro;
    }
};
