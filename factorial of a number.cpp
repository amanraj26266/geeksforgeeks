#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
  int res = 1;
  if (n == 0)
  {
    return 1;
  }

  return res = n * fact(n - 1);
}
int main()
{
  int n = 13;
  int res = fact(n);
  cout << res;
  return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int fact(int n)
// {
//   int res = 1;
//   for (int i = 2; i <= n; i++)
//   {
//     res = res * i;
//     }
//   return res;
// }
// int main()
// {
//   int n = 24;
//   int res = fact(n);
//   cout << res;
//   return 0;
// }