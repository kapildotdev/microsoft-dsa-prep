
// maintain char frequency and ht size
// keep size <= k
// keep updating the best value
//
// TC: O(N), SC: O(N)
//


#include <bits/stdc++.h>
int kDistinctChars(int k, string &str)
{
    // Write your code here

    int n = str.length();
    unordered_map<char,int> ht;
    int l  = 0;
    int best = 0;
    for(int r = 0; r < n; r++){
         
        char c = str[r];
        ht[c]++;
        while(ht.size() > k && l < n){
            char d = str[l++];
            ht[d]--;
            if( ht[d]== 0) ht.erase(d);
        }
      
        best = max(best, r-l+1);

    }
    return best;
}



