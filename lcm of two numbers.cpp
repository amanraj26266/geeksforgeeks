//---------nive solution for lcm of two numbers -------//
// #include <bits/stdc++.h>
// using namespace std;
// int lcm(int a, int b)
// {
//   int res = max(a, b);
//   while (true)
//   {
//     if (res % a == 0 && res % b == 0)
//     {
//       return res;
//     }
//     res++;
//   }
//   return res;
// }
// int main()
// {
//   int a = 10, b = 15;
//   int res = lcm(a, b);
//   cout << "The lcm of two numbers is " << res;
// }

//-----------optimized solution using euclid ---------//
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }

  return gcd(b, a % b);
}
int lcm(int a, int b)
{
  return (a * b) / gcd(b, a % b);
}
int main()
{
  int a = 10, b = 12;
  int res = lcm(a, b);
  cout << " the lcm of two numbers is " << res;
}