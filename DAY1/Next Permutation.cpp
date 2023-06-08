vector<int> nextPermutation(vector<int> &per, int n)
{
    next_permutation(per.begin(),per.end());
    return per;
}


// next_permutation() STL => inner operation
// #include <bits/stdc++.h> 
// vector<int> nextPermutation(vector<int> &per, int n)
// {
//     int i,ind=-1;
//     for(i=n-2;i>=0;i--) {
//         if(per[i+1]>per[i]) {ind=i; break;}
//     }
//     if(ind==-1) {
//         reverse(per.begin(),per.end());
//         return per;
//     }
//     for(i=n-1;i>ind;i--) {
//         if(per[i]>per[ind]) {
//             swap(per[i],per[ind]);
//             break;
//         }
//     }
//     reverse(per.begin()+ind+1,per.end());
//     return per;
// }