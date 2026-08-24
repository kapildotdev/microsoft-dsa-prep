// my approach
// 
//I maintained a vector<int> and a pointer to its elements
// the idc vector store indices that has zero values (in nums) at some point of time
// the idx is the pointer to idc element that is still zero and not swapped
// Time Complexity: O(N)
// Space Coomplexity: O(N)
//


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = (int)nums.size();
        int idx = 0;
        vector<int> idc;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                idc.push_back(i);
            }else if(idc.size() > idx){
                    swap(nums[i],nums[idc[idx]]);
                    idc.push_back(i);
                    idx++;
                }
            

        }
    }
};
