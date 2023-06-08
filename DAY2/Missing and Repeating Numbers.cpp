pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	unordered_map<int,int> m;
	for(auto i:arr) m[i]++;
	int x,y,i;
	for(i=1;i<=n;i++) {
		if(!m[i]) {x=i;}
		if(m[i]>1) {y=i;}
	}
	return {x,y};
}

// USING-XOR-MOST-OPTIMAL-BY-STRIVER

// #include <bits/stdc++.h>

// pair<int,int> missingAndRepeating(vector<int> &arr, int n)
// {
// 	// Write your code here 
// 	int t=0,i,p=0;
// 	for(i=0;i<n;i++) {
// 		t^=arr[i];
// 		t^=(i+1);
// 	}
	// while(t) {     // this can be done without a loop number = t& ~(t-1);
	// 	if(t%2) break; 
	// 	t/=2; p++;
	// }
// 	int x=0,y=0;
// 	for(i=0;i<n;i++) {
// 		if((arr[i]&(1<<p))) x^=arr[i]; // so that we can check arr[i]&(number)
// 		else y^=arr[i];
// 	}
// 	for(i=1;i<=n;i++) {
// 		if((i&(1<<p))) x^=i;
// 		else y^=i;
// 	}
// 	int c=0;
// 	for(i=0;i<n;i++) {
// 		if(x==arr[i]) c++;
// 	}
// 	if(!c) return {x,y}; 
// 	return {y,x};
// }
