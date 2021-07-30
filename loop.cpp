#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"ENTER NO.";
     cin>>n;
     /*for(int i=0; i<=n; i++)
     {
        cout<<"Execute"<<i<<"time"<<endl;
     }*/
     int i=0; //0 1 2 3 4 5
     // int i=1 ---> 1 2 3 4 5
    while(i<=n){
        cout<<"Execute"<<i<<"time"<<endl;
        i++;
    }
     return 0;
}
