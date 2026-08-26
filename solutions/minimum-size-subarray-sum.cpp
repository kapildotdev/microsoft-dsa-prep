//dynamic sliding window
//
//TC: O(N), SC: O(1)
//


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = (int)nums.size();

        int left = 0;
        long long sum = 0;
        int best = INT_MAX;

        for (int right = 0; right < n; ++right) {
            sum += nums[right];              // expand window

            while (sum >= target) {          // shrink while valid
                best = min(best, right - left + 1);
                sum -= nums[left];
                ++left;
            }
        }

        return best == INT_MAX ? 0 : best;
    }
};
