#include<iostream>
using namespace std;
int main(){
    int no, fact=1;
    cout<<"Enter no to find factorial";
    cin>>no;
    for(int i=1; i<=no; i++){
        fact = fact*i;
    }
    cout<<"Factorial "<<fact;
}
