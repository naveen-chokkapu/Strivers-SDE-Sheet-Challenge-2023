#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    unordered_map<int,int> m;
    for(auto i:arr) m[i]++;
    vector<int> ans;
    for(auto i:m) {
        if(i.second>(arr.size()/3)) 
            ans.push_back(i.first);
    }
    return ans;
}