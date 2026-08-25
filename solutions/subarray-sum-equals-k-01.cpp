// using prefixSums map to keep prefixSum freq
// as k-currSum existance refer to subarray that has sum of k
// and freq of k-currSum refer to no. subarray exists
//
//

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCounts;
        
        prefixCounts[0] = 1;
        int currSum = 0, ans = 0;

        for(int num: nums){
            currSum += num;
            if(prefixCounts.count(currSum-k)){
                ans += prefixCounts[currSum-k];
            }
            prefixCounts[currSum]++;
        }

        return ans;
    }
};
