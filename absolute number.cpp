#include <bits/stdc++.h>
using namespace std;
int absolute(int n)
{
  if (n >= 0)
  {
    return n;
  }
  else
  {
    return -n;
  }
}
int main()
{
  int n;
  cin >> n;
  int res = absolute(n);
  cout << res;
}