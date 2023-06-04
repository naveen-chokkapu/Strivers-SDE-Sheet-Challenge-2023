void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	vector<pair<int,int>> v;
	int i,j,n=matrix.size(),m=matrix[0].size();
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			if(!matrix[i][j])
			v.push_back({i,j});
		}
	}
	for(i=0;i<v.size();i++) {
		  for(j=0;j<m;j++) matrix[v[i].first][j]=0;
		  for(j=0;j<n;j++) matrix[j][v[i].second]=0;
	}
}