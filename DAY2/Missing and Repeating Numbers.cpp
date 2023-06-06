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
kokkk