//Improved version 1.0
//Here didn't maintained a vector and it's index 
//instead to get the leftmost zero index I can simply maintain the length of zeroes subarray
//as the size of zeroes subarray keep on increasing we don't need to handle any other case
//TC: O(N)
//SC: O(1)
//

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = (int)nums.size();
        int len = 0;
        for(int i = 0;i < n; i++){
            if(nums[i] == 0){
                len++;
            }else if(len > 0){
                nums[i-len] = nums[i];
                nums[i] = 0;
            }
        }
    }
};
