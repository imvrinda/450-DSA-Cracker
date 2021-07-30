#include <iostream>
using namespace std;
int main()
{
int N, N1[2];
cin >> N;
while(N--)
{
int i = 2;
    while(i--)
    {
        cin >> N1[i];
    }
        cout << N1[0] * N1[1] << endl;
    }
return 0;
}
