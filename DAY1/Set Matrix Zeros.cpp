#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int i,j,n=matrix.size(),m=matrix[0].size(),col=1;
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			if(!matrix[i][j]) {
				matrix[i][0]=0;
				if(j!=0) matrix[0][j]=0;
				else col=0;
			}
		}
	}
	// make row0 and col0 as temp array for checking whether entire row has a 0 or entire col has a 0
	for(i=1;i<n;i++) {
		for(j=1;j<m;j++) {
			if(!matrix[i][0]||!matrix[0][j])
			matrix[i][j]=0;
		}
	}

	// special case that if we change these at beginning matrix effects
	// since row depends on matrix[0][0] and col depends on col variable
	
	if(!matrix[0][0]) {
		for(j=1;j<m;j++) matrix[0][j]=0;
	}
	if(!col) {
		for(i=0;i<n;i++) matrix[i][0]=0;
	}
}

// MOST-OPTIMAL-SOLUTION-FROM-STRIVER