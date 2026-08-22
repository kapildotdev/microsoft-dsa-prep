class Solution {
    void solve(string& s, const string& t) {
      int  i = 0;
      while(s[i]==t[i]){
        i++;
      }
      s = s.substr(0,i);
    }

public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = (int)strs.size();
        string ans = "";
        if (strs.empty())
            return ans;
        if (n == 1)
            return strs[0];
        ans = strs[0];
        for (int i = 1; i < n; i++) {
            cout << ans << endl;
             solve(ans, strs[i]);
            if (ans.empty()) {
                return "";
            }
        }

        return ans;
    }
};
