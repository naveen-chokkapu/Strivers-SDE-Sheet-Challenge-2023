#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	unordered_map<int,int> m;
	for(int i=0;i<n;i++) m[arr[i]]++;
	for(auto i:m) {
		if(i.second>n/2) return i.first;
	}
	return -1;
}


// MOORE'S-ALGO-BY-STRIVER

// #include <bits/stdc++.h>

// int findMajorityElement(int arr[], int n) {
// 	// Write your code here.
// 	int i,c=0,e,s=0;
// 	for(i=0;i<n;i++) {
// 		if(c==0) {
// 			c=1; e=arr[i];
// 		}
// 		else if(e==arr[i]) c++;
// 		else c--;
// 	}
// 	for(i=0;i<n;i++) {
// 		if(arr[i]==e) s++;
// 	}
// 	if(s>n/2) return e;
// 	return -1;
// }

// MOST-OPTIMAL: SPACE: O(1)