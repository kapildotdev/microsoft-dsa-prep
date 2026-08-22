class Solution {
 
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = (int)strs.size();
        string ans = "";
        if (strs.empty())
            return ans;
        if (n == 1)
            return strs[0];
        ans = strs[0];
        int len = ans.length();
        for (int i = 1; i < n; i++) {
        string& s = strs[i];
        while(len > s.length() || s.substr(0,len) != ans.substr(0,len)){
            len--;
            if(len == 0){
                return "";
            }
        }

        }

        return ans.substr(0,len);
    }
};
