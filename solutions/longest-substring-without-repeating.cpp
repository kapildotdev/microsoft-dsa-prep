//using a hashmap to store the index of last occuring of a character
//also maintaining two pointers window which can change size according to the conditions
//if a character exist on or after i, we must move i to one step ahead of that position
//
//TC: O(N) SC: O(N)
//

class Solution {
    void debug(int i, int j, int ans){
        printf("i: %d, j: %d  ans: %d\n",i,j,ans);
    }
public:
    int lengthOfLongestSubstring(string s) {
       int n = s.length();
       int ans = 0;
       int i = 0, j = 0;
       unordered_map<char,int> ht;
       for(; j < n; j++){
        if(ht.count(s[j]) && ht[s[j]] >=i){           
           i = ht[s[j]]+1;
        }
         ans = max(ans,j-i+1);
         ht[s[j]] = j;
       }
       return ans;
    }
};
