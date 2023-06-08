#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &t)
{
    // Write your code here.
    sort(t.begin(),t.end());
    vector<vector<int>> ans;
    int i,x=t[0][0],y=t[0][1];
    for(i=1;i<t.size();i++) {
        if(t[i][0]>=x && t[i][0]<=y) y=max(y,t[i][1]);
        else {
            ans.push_back({x,y});
            x=t[i][0],y=t[i][1];
        }
    }
    ans.push_back({x,y});
    return ans;
}
