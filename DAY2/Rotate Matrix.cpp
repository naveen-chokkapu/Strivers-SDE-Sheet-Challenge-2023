#include <bits/stdc++.h>
#define pb push_back

void spiral(int i,int j,int n,int m,vector<vector<int>> &mat) {
        vector<int> res;
        int row,col;
        for(col=i;col>=j;col--) res.pb(mat[col][j]);
        for(row=i;row<=m-i;row++) res.pb(mat[i-1][row]);
        for(col=i;col<n-j;col++) res.pb(mat[col][m-i]);
        for(row=m-i-1;row>j;row--) res.pb(mat[n-i][row]);
        for(col=n-i;col>i;col--) res.pb(mat[col][j]);
        
        int x = res.back();
        res.pop_back();
        res.insert(res.begin(),x);

        // Let's modify
        int k=0;
        for(col=i;col>=j;col--) mat[col][j] = res[k++];
        for(row=i;row<=m-i;row++) mat[i-1][row] = res[k++];
        for(col=i;col<n-j;col++) mat[col][m-i] = res[k++];
        for(row=m-i-1;row>j;row--) mat[n-i][row] = res[k++];
        for(col=n-i;col>i;col--) mat[col][j] = res[k++];
}

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
        int x = min(n,m)/2,i=1,j=0;
        while(x--) {
            spiral(i,j,n,m,mat);
            i++; j++;
        }
}


// Its ultra bruteforce dont be scary😂 !! 