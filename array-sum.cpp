#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	int A[n1], B[n2];
	int add[n1+n2];
	cin>>n1>>n2;
	
	for(int i=0;i<n1;i++){
		cin>>A[i];
	}
	
	for(int i=0;i<n2;i++){
		cin>>B[i];
	}
	
	cout<<"Addition of A and B";
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){	
		
		add[i] = A[i]+B[j];
		cout<<add[i];
		}
	}
	//cout<<"Add :"<<add[i ];
	return 0;
	
}
