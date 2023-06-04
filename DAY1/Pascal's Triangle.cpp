vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
      if(n==1) return {{1}};
      vector<vector<long long>> ans;
      ans.push_back({1});
      int i,j;
      for(i=1;i<n;i++) {
        vector<long long> v;
        v.push_back(1);
        for(j=1;j<ans[ans.size()-1].size();j++) {
          v.push_back(ans[ans.size()-1][j]+ans[ans.size()-1][j-1]);
        }
        v.push_back(1);
        ans.push_back(v);
      }
      return ans;
}
