class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<short> ht(26,0);
        if(s.length() == t.length()){
           
            for(int i = 0; i < s.length(); i++){
                ht[s[i]-'a']+=1;
                ht[t[i]-'a']-=1;
            }
            for(const auto& i: ht){
                if (i != 0) {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
};