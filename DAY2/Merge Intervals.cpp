vector<vector<int>> mergeIntervals(vector<vector<int>> &Int)
{
    // Write your code here.
    sort(Int.begin(),Int.end());
    vector<vector<int>> ans;
    int x = INT_MAX;
    for(int i=1;i<Int.size();i++) {
        if((Int[i-1][1]>=Int[i][0] && Int[i-1][1]<=Int[i][1]) || Int[i-1][1]>=Int[i][1]) {
            x=min(x,Int[i-1][0]); Int[i][1] = max(Int[i][1],Int[i-1][1]);
        }
        else {
            ans.push_back({min(Int[i-1][0],x),Int[i-1][1]});
            x = INT_MAX;
        }
    }
    ans.push_back({min(Int[Int.size()-1][0],x),Int[Int.size()-1][1]});
    return ans;
}