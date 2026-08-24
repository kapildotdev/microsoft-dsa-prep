// maintained two leftProduct and rightProduct array
// for a particular i the value of product except self would be the product of leftProduct at i-1 and rightProudct at i+1
// hanled the edge cases for i = 0, and i = n-1;
//
//Time Complexity: O(N), Space Complexity: O(N)
//
//


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = (int) nums.size();
        vector<int> lp(n,1);
        vector<int> rp(n,1);
        lp[0] = nums[0];
        rp[n-1] = nums[n-1];
        for(int i = 1; i < n; i++){
            lp[i] = lp[i-1] * nums[i];
        }
        for(int i = n-2; i >= 0; i--){
            rp[i] = rp[i+1] * nums[i];
        }
        vector<int> ans;
        ans.reserve(n);
        for(int  i = 0; i < n; i++){
            if(i == 0){
                ans.push_back(rp[i+1]);
            }else if (i == n-1){
                ans.push_back(lp[i-1]);
            }else {
                ans.push_back(lp[i-1]*rp[i+1]);
            }

        }
        return ans;
    }
};
