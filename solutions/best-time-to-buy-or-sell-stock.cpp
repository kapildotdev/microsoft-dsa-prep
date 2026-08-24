class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int till_min = INT_MAX;
        for(const int& i: prices){
            till_min = min(till_min, i);
            if(till_min < i){
                ans = max(ans, i-till_min);
            }
        }
        return ans;
    }
};
