vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int> t(arr1.begin(),arr1.end());
	for(auto i:arr2) t.push_back(i);
	sort(t.begin(),t.end());
	while(t[0]==0) t.erase(t.begin());
	return t;
}