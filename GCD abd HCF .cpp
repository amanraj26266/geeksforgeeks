//-----------naive solution-------------------//

// #include <bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b)
// {
//   int res = min(a, b);
//   while (res > 0)
//   {
//     if (a % res == 0 && b % res == 0)
//     {
//       break;
//     }
//     res--;
//   }
//   return res;
// }
// int main()
// {
//   int a, b;
//   cin >> a >> b;
//   int ress = gcd(a, b);
//   cout << "the gcd / hcf of the number " << ress;
// }

//------------Euclid algorithm to solve gcd ------------//

// #include <bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b)
// {
//   while (a != b)
//   {
//     if (a > b)
//     {
//       a = a - b;
//     }
//     else
//     {
//       b = b - a;
//     }
//     return a;
//   }
// }
// int main()
// {
//   int a = 10, b = 5;
//   int res = gcd(a, b);
//   cout << " the gcd of the two numbers is " << res;
// }

//-------------optimized euclid algo to solve gcd---------//
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  else
  {

    return gcd(b, a % b);
  }
}
int main()
{
  int a = 12, b = 15;
  int res = gcd(a, b);
  cout << "the gcd of two number with optimized euclid algo is " << res;
}