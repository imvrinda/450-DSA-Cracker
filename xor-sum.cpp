#include <iostream>
using namespace std;

int main() {

	int m,x[100],y[100],sum,arr[100],k,n;
	cout<<"enter no. of array elements"<<endl;
	cin>>m; //enter no. of array elements
	for(int i = 0; i < m; i++)
	    cin>>arr[i];
    cout<<"Enter xor count";
	cin>>n;
	while(m--){
	    if(k==n)
	        for(int i=0; i<sizeof(arr); i++)
	        {
	            x[i]= arr[i]^n;
	            for(int j=0; j<sizeof(x); j++)
	            {
	                sum+=x[j];
	            }
	        }
	        cout<<sum;
}
	return 0;
}
