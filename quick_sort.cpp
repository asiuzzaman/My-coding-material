#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 


int Part(int arr[],int low,int high)
{
	int pivot=arr[high],i,j,t,k;
        
        k=low-1;

	for( i=low;i<high;i++)
	{
		if(arr[i]<pivot)
		{
           k++;
          swap(arr[i],arr[k]);
		}
	}

	swap(arr[k+1],arr[high]);
	return k+1;
}

void QuickSort(int arr[],int low,int high)
{
	if(low<high)
   {
	int p=Part(arr,low,high);

	QuickSort(arr,low,p-1);
	QuickSort(arr,p+1,high);

   }
}

int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif
    
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
  
int low=0,high=n-1;

  QuickSort(arr,low,high);

  for (int i = 0; i < n; ++i)
  {
  	cout<<arr[i]<<" ";
  }
  cout<<endl;
   
}