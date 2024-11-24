#include <bits/stdc++.h>
using namespace std;

void merge(int left, int right, int mid, int arr[]){
	int left_size = mid -left+1;
	int LEFT[left_size+1];
	int right_size=right-mid;
	int RIGHT[right_size+1];

	for (int i = 0; i < left_size; ++i)
	{
		LEFT[i]= arr[i+left];
	}
	for (int i = 0; i < right_size; ++i)
	{
		RIGHT[i]= arr[i+mid+1];
	}
	LEFT[left_size] = RIGHT[right_size]= INT_MAX;

	int left_i=0;
	int right_i=0;
	for (int i = left; i <=right; ++i)
	{
		if (LEFT[left_i]<=RIGHT[right_i])
		{
			arr[i]= LEFT[left_i];
			left_i++;
		}else{
			arr[i]= RIGHT[right_i];
			right_i++;
		}
	}
}

void mergeSort(int left,int right,int arr[]){
	if (left ==right) 
	{
		return;
	}
	int mid = (left+right)/2;
	mergeSort(left,mid,arr);
	mergeSort(mid+1,right,arr);
	merge(left,right,mid,arr);
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	mergeSort(0,n-1,arr);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;	
}