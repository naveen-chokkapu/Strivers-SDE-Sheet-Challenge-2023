// MY-CODE
#include <bits/stdc++.h> 
#define ll long long

int bs(ll tar,vector<int> b,int n) {
    ll l=0,h=n-1;
    while(l<=h) {
        ll m=(l+h)/2;
        if(b[m]==tar) return m;
        if(b[m]>tar) h=m-1;
        else l=m+1;
    }
    return -1;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    ll i,ans=0,x;
    vector<int> b(n);
    for(i=0;i<n;i++) b[i]=arr[i];

    sort(b.begin(),b.end());
    for(i=0;i<n;i++) {
        x = bs(arr[i],b,n-i);
        ans+=x;
        b.erase(b.begin()+x); //O[n]
    }
    return ans; // worst case o[n^2] with space: O(n)
}



// ..USING-MERGE-SORT-BY-STRIVER
// #include <bits/stdc++.h> 
// #define ll long long
// ll ans=0;

// void merge(vector<ll> &arr, int low, int mid, int high) {
//     vector<ll> temp; // temporary array
//     int left = low;      // starting index of left half of arr
//     int right = mid + 1;   // starting index of right half of arr

//     //storing elements in the temporary array in a sorted manner//

//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             ans+=(mid-left+1);
//             right++;
//         }
//     }

//     // if elements on the left half are still left //

//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     //  if elements on the right half are still left //
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     // transfering all elements from temporary to arr //
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }
// }

// void mergeSort(vector<ll> &arr, int low, int high) {
//     if (low >= high) return;
//     int mid = (low + high) / 2 ;
//     mergeSort(arr, low, mid);  // left half
//     mergeSort(arr, mid + 1, high); // right half
//     merge(arr, low, mid, high);  // merging sorted halves
// }

// long long getInversions(long long *arr, int n){
//     // Write your code here.
//     vector<ll> a(n); ans=0;
//     for(int i=0;i<n;i++) a[i]=arr[i];
//     mergeSort(a,0,n-1);
//     return ans;
// }