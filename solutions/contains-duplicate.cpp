//just using unordered set for remebering passed elements
//if an element appears again return true
//if entire loop is completed return false
//TC: O(N), SC: O(N)
//

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    int n = (int) nums.size();
    unordered_set<int> ht;
    for(const int& i: nums){
        if(ht.count(i))
            return true;
        ht.insert(i);
    }
    return false;
    }
};
