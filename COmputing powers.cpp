// #include <bits/stdc++.h>
// using namespace std;
// int power(int x, int n)
// {
//   int result = 1;
//   for (int i = 0; i < n; i++)
//   {
//     result = result * x;
//   }
//   return result;
// }
// int main()
// {
//   int n, x;
//   cin >> x >> n;
//   int res = power(x, n);
//   cout << res;
//   return 0;
// }

//---------------------------//
// #include <bits/stdc++.h>
// using namespace std;
// int pow(int x, int n)
// {
//   if (n == 0)
//   {
//     return 1;
//   };
//   int temp = pow(x, n / 2);
//   temp = temp * temp;
//   if (n % 2 == 0)
//   {
//     return temp;
//   }
//   else
//   {
//     return temp * x;
//   }
// }
// int main()
// {
//   int x, n;
//   cin >> x >> n;
//   int res = pow(x, n);
//   cout << res;
//   return 0;
// }

//----------------Iterrative power----------------------//
#include <bits/stdc++.h>
using namespace std;
int ItrPow(int x, int n)
{
  int res = 1;
  while (n > 0)
  {
    if (n % 2 != 0)
    {
      res = res * x;
    }
    x = x * x;
    n = n / 2;
  }
  return res;
}
int main()
{
  int x, n;
  cin >> x >> n;
  int res = ItrPow(x, n);
  cout << res;
}