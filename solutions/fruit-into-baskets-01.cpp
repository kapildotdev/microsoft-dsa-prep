// just maintain a map with size 2
// keep on decrease element count in ht on left pointer
// remove element with 0 count
// break loop onece ht size restore to 2
// calculate best
//
// TC: O(N), SC: O(N)
//
//


class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> cnt;
        int left = 0, best = 0;

        for (int right = 0; right < (int)fruits.size(); ++right) {
            cnt[fruits[right]]++;

            while (cnt.size() > 2) {                 // shrink while invalid
                if (--cnt[fruits[left]] == 0)
                    cnt.erase(fruits[left]);         // keep size() truthful
                ++left;
            }

            best = max(best, right - left + 1);
        }

        return best;
    }
};
