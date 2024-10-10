#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
  int res = 0;
  while (n > 0)
  {
    n = n / 10;
    res++;
  }
  return res;
}

int main()
{
  int n = 2345;
  int res = fun(n);
  cout << res;
  return 0;
}
