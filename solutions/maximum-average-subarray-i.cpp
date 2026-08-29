

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.0,best = INT64_MIN;
        int  r = 0;
        for(; r < k; r++){
            sum += 1.0 *nums[r];
        }
        best = sum/k;
        for(r = k; r < nums.size(); r++){
            sum += nums[r];
            sum -= nums[r-k];
            best = max(best, sum/k);
        }
        return best;
    }
};
