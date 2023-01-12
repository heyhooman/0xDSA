//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int k=l;
         int j=m+1;
         int i=l;
         int a[l+r];
         while(i<=m && j<=r){
             if(arr[i]<=arr[j]){
                 a[k]=arr[i];
                 i++;
             }
             else{
                 a[k]=arr[j];
                 j++;
             }
             k++;
         }
         while(i<=m){
             a[k++]=arr[i++];
         }
         while(j<=r){
             a[k++]=arr[j++];
         }
         k=l;
         while(k<=r){
             arr[k]=a[k];
             k++;
         }
         // Your code here
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r){
            int mid=(l+r)/2;
            mergeSort(arr,l, mid );
            mergeSort(arr,mid+1,r );
            merge(arr, l, mid, r);
        }
        //code here
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends