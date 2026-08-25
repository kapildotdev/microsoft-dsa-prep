class Solution {
public:
    int lengthOfLongestSubstring(const string& s) {
        int n = s.size();
        int ans = 0;
        int i = 0;
        
        // 128 covers all standard ASCII characters. 
        // Initialize to -1 to represent "not seen yet".
        vector<int> last_seen(128, -1); 
        
        for (int j = 0; j < n; j++) {
            unsigned char c = s[j]; // cast to unsigned to prevent negative index issues
            
            // If we've seen this character AND it's inside our current window
            if (last_seen[c] >= i) {
                i = last_seen[c] + 1;
            }
            
            ans = max(ans, j - i + 1);
            last_seen[c] = j;
        }
        
        return ans;
    }
};
