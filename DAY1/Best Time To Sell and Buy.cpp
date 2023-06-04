int maximumProfit(vector<int> &pri){
    // Write your code here.
    int i,t=-1;
    for(i=pri.size()-1;i>=0;i--) {
        t=max(t,pri[i]);
        pri[i]=t-pri[i];
    }
    return *max_element(pri.begin(),pri.end());
}