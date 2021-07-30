#include<iostream>
#include<cmath>
//Armstrong no. when you take cube of no. and add it and ans is same as no.
// 1 5 3 --> 1 125 27--> 1+125+27 = 153
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int original =n;
	while(n>0){
		int last= n%10; //3
		sum += pow(last,3); //27
		n=n/10; //remove 3
	}
	if(sum==original){
		cout<<"armstrong number";
	}
	else{
		cout<<"No";
	}
}
