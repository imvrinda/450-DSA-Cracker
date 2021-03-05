#include<bits/stdc++.h>
using namespace std;
main(){
	int n, arr[n];
	int maxn=INT_MIN,minn=INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<n;i++){
	    maxn=max(maxn,arr[i]);
	    minn=min(minn,arr[i]);
	}
	cout<<maxn<<endl;
	cout<<minn<<endl;
 return 0;
}
