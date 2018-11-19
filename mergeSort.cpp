#include<bits/stdc++.h>
using  namespace std;

void merge(int arr[], int left, int mid, int right) 
{ 
   // int i, j, k; 
    int size_left = mid - left + 1; 
    int size_right =  right - mid; 
  
    /* create temp arrays */
    int L[size_left], R[size_right]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (int i = 0; i < size_left; i++) 
        L[i] = arr[left + i]; 
    for (int j = 0; j < size_right; j++) 
        R[j] = arr[mid + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
   int  i = 0; // Initial index of first subarray 
   int  j = 0; // Initial index of second subarray 
   int  k = left; // Initial index of merged subarray 
    while (i < size_left and  j < size_right) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < size_left) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < size_right) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
  

#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 

int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif
    
     int arr[] = {12, 11, 13, 5, 6, 7}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
  
    
    //printArray(arr, arr_size); 
  
    mergeSort(arr, 0, arr_size - 1); 
  
   // printf("\nSorted array is \n"); 
    for (int i = 0; i < arr_size; ++i)
    {
    	cout<<arr[i]<<" ";
    	/* code */
    }
    

   
}
