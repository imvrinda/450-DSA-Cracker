#include<iostream>
using namespace std;
int main(){
int n;
	cin>>n;
	if(n>100){
		cout<<"Enter number between 1 to 100"<<endl;
	}
	else{
	if(n%5==0){
		cout<<n<<"is multiple of 5"<<endl;
	}
	else{
		cout<<n<<"Not multiple of 5"<<endl;
	}
}
return 0;
}
