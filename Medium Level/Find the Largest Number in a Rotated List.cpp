/* Problem -
https://binarysearch.com/problems/Find-the-Largest-Number-in-a-Rotated-List

Q. You are given a list of unique integers nums that is sorted in ascending order and 
   is rotated at some pivot point. Find the maximum number in the rotated list.

   Can you solve it in \mathcal{O}(\log{}n)O(logn)?
*/

int solve(vector<int>& arr) {
    int n = arr.size();
    int i = 0, j = n-1;
    while(i<=j){
        if(i == j && (i == n-1 || i == 0)) return arr[i];
        int mid = i+(j-i)/2;
        if((mid-1<0 || arr[mid]>arr[mid-1]) && (mid+1>n-1 || arr[mid]>arr[mid+1]))
            return arr[mid];
        if(arr[mid]<arr[0]) j = mid-1;
        else i = mid+1;
    }
    return arr[0];
}
