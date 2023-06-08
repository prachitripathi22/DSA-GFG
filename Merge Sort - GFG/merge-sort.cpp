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
         // Your code here
         int n1 = m-l+1;
         int n2 = r-m;
         int k=l;
         
         int leftarr[n1],rightarr[n2];
         for(int i=0;i<n1;i++)
         {
             leftarr[i]=arr[i+l];
         }
         for(int j=0;j<n2;j++)
         {
             rightarr[j]=arr[m+1+j];
         }
         int i=0;
         int j=0;
         
         while(i<n1 && j<n2)
         {
             if(leftarr[i] <= rightarr[j]) 
             {
                 arr[k] = leftarr[i];
                 i++;
             }
             else
             {
                 arr[k] = rightarr[j];
                 j++;
             }
             k++;
         }
         while(i<n1)
         {
             arr[k] = leftarr[i];
             i++;
             k++;
         }
         while(j<n2)
         {
             arr[k] = rightarr[j];
             j++;
             k++;
         }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        int mid;
        if(l<r)
        {
            mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
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