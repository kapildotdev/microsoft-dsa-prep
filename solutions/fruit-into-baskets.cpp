// check if the third element occur
// consider just before element as the second memeber
// keep running backward till 2nd memeber stop occuring
// remove the 3rd (older one) element 
// maintain the best 
//
// TC: O(N), SC: O(N)
//
//


class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    int n = (int)fruits.size();
    int l = 0, best = 0;
    unordered_set<int> ht;
    for(int r = 0; r < n; r++){
       int v = fruits[r];
       if(ht.count(v) == 0 && ht.size() == 2){
        l = r-1;
        while(fruits[l]==fruits[l-1]) l--;
        ht.erase(fruits[l-1]);
       }
       ht.insert(fruits[r]);
       best = max(best,r-l+1);
    }
    return best;
    }
};
