#include <bits/stdc++.h>
using namespace std;
int fun(int n)
{
  if (n == 0)
  {
    return 0;
  }
  cout << n;
  fun(n - 1);
  cout << n;
}
int main()
{
  int n;
  cin >> n;
  fun(n);
}