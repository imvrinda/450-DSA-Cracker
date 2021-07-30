#include<iostream>
using namespace std;
int main(){
	int start, end;
	cin>>start>>end;
	for(int i=start;i<=end;i++){
		int num;
		for(num=2;num<i;num++){
			if(i%num==0){
				break;
			}
		}
		if(num==i){
			cout<<i<<endl;
		}
	}
	return 0;
}
