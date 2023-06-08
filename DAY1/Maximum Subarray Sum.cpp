long long maxSubarraySum(int a[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long ans=0,t=a[0],i;
    for(i=1;i<n;i++) {
        t+=a[i];
        // ans=max(ans,t); or
        if(t>ans) {
            ans=t;
        }
        if(t<0) t=0;
    }
    return ans;
}

// If they want subarr that gives maximum subarr sum
// long long ans=0,t=a[0],i,start;

// int startind = -1,endind = -1;
//     for(i=1;i<n;i++) {
    // if(t==0) start=i;
//         t+=a[i];
//    //    ans=max(ans,t); or
//         if(t>ans) {
//             ans=t;
            // startind=start,endind=i;
//         }
//         if(t<0) t=0;
//     }
//     return ans;