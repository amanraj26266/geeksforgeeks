//------------------------count by converting it to string and then applying .length()----------------//
// #include <bits/stdc++.h>
// using namespace std;
// int fact(int n)
// {
//   int res = 1;
//   if (n == 0)
//   {
//     return 1;
//   }
//   return res = n * fact(n - 1);
// }
// int main()
// {
//   int n;
//   cin >> n;
//   int res = to_string(fact(n)).length();
//   cout << res;
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
  if (n < 0)
  {
    return 0;
  }
  if (n <= 1)
  {
    return 1;
  }
  double digits = 0;
  for (int i = 2; i <= n; i++)
  {
    digits += log10(i);
  }
  return floor(digits) + 1;
}
int main()
{
  int n;
  cin >> n;
  int res = count(n);
  cout << res;
}
