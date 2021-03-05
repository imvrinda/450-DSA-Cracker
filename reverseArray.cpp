#include<bits/stdc++.h>
using namespace std;
main(){
	int n, arr[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//start=0, end=end-1
	int j=n-1;
	int i=0;
	while(i<j){
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}