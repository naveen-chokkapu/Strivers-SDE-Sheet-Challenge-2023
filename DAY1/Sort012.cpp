void sort012(int *arr, int n)
{
   //   Write your code here
      sort(arr,arr+n);
}



// using 3 pointers (DUTCH NATIONAL FLAG ALGO)
// void sort012(int *arr, int n)
// {
//    //   Write your code here
//       int low=0,mid=0,high=n-1;
//       while(mid<=high) {
//          if(arr[mid]==0) {
//             swap(arr[low],arr[mid]);
//             low++; mid++;
//          }
//          else if(arr[mid]==2) {
//             swap(arr[mid],arr[high]);
//             high--;
//          }
//          else mid++;
//       }
// }
// Just consider, from [mid .. high] is unsorted and [0 .. mid-1] and [high+1 .. n-1] are sorted 