class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = (int)intervals.size();
        if(n < 2) return intervals;
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        int a = intervals[0][0], b = intervals[0][1];
        for(int i = 1; i < n; i++){
            //check if overlapping
            if(intervals[i][0] <=b) {
                b = max(intervals[i][1],b);
              
            }else {
                ans.push_back({a,b});
                a = intervals[i][0];
                b = intervals[i][1];
            }
              if(i == n-1){
                    ans.push_back({a,b});
                }
        }

        return ans;
        
    }
};
