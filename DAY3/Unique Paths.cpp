#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	int dp[m][n],i,j;
	for(i=0;i<m;i++) dp[i][0]=1;
	for(i=0;i<n;i++) dp[0][i]=1;
	for(i=0;i<m-1;i++) {
		for(j=0;j<n-1;j++) {
			dp[i+1][j+1]=dp[i][j+1]+dp[i+1][j];
		}
	}
	return dp[m-1][n-1];
}