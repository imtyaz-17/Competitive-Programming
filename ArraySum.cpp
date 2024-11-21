#include <bits/stdc++.h>
using namespace std;


int arraySum(int arr[],int n){
	if(n<0) return 0;
	return arraySum(arr,n-1)+arr[n];
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<arraySum(arr,n-1)<<endl;
	return 0;	
}