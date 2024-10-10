#include <bits/stdc++.h>
using namespace std;
int isSet(int n, int k)
{
  // int x = 1;
  // for (int i = 0; i < (k - 1); i++)
  // {
  //   x = x * 2;
  //   if ((n & x) != 0)
  //   {
  //     cout << "YES";
  //   }
  //   else
  //   {
  //     cout << "NO";
  //   }
  // }

  // -----------------method 1 for the optimized code using leftshift operator--------------------//
  // int x = (1 << (k - 1));
  // if ((n & x) != 0)
  // {
  //   cout << "yes";
  // }
  // else
  // {
  //   cout << "no";
  // }

  int x = (n >> (k - 1));
  if ((x & 1) != 0)
  {
    cout << "yes";
  }
  else
  {
    cout << "no";
  }
}
int main()
{
  int n, k;
  cin >> n >> k;
  isSet(n, k);
}