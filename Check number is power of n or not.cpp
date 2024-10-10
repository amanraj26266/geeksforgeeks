//----------------- a nive solution to find weather the number is power of 2 or not ---------------//
// #include <bits/stdc++.h>
// using namespace std;
// bool power(int n)
// {
//   if (n == 0)
//   {
//     return false;
//   }
//   while (n != 1)
//   {
//     if (n % 2 != 0)
//     {
//       return false;
//     }
//     n = n / 2;
//   }
//   return true;
// }
// int main()
// {
//   int n;
//   cin >> n;
//   int res = power(n);
//   if (res == 1)
//   {
//     cout << "yes it is";
//   }
//   else
//   {
//     cout << "no it is not";
//   }
// }

#include <bits/stdc++.h>
using namespace std;
int power(int n)
{
  int count = 0;
  while (n > 0)
  {
    n = n & (n - 1);
    count += 1;
  }
  return count;
}
int main()
{
  int n;
  cin >> n;
  int res = power(n);
  if (res == 1)
  {
    cout << "yes it is ";
  }
  else
  {
    cout << "no it is not ";
  }

  // cout << res;
}