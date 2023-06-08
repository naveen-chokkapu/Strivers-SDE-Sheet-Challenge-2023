// considering last elemnt is smaller than next row first element
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size(),m=mat[0].size();
        int l=0,h=(n*m)-1;
        while(l<=h) {
            int mid=(l+h)/2;
            if(mat[mid/m][mid%m]==target) return true;
            if(mat[mid/m][mid%m]>target) h=mid-1;
            else l=mid+1;
        }
        return false;
}



// If no such condition
// bool searchMatrix(vector<vector<int>>& mat, int target) {
//         int i=0,j=m-1;
//         while(i<n && j>=0) {
//             if(mat[i][j]==target) return true;
//             if(mat[i][j]>target) j--;
//             else i++;
//         }
//         return false;
// }