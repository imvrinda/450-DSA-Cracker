#include <bits stdc++.h="">
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin >> t;
while (t--)
{
long long n;
cin >> n;
cout << (4 * n * (n + 1) * (2 * n + 1) / 6) + n - (4 * n * (n + 1) / 2);
cout << '\n';
}

return 0;
}
