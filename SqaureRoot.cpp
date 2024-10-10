// #include <iostream>
// using namespace std;

// double basic_sqrt(long long x)
// {
//   if (x == 0 || x == 1)
//     return x;

//   long long start = 0, end = x, result = 0;
//   while (start <= end)
//   {
//     long long mid = (start + end) / 2;

//     if (mid * mid == x)
//       return mid;

//     if (mid * mid < x)
//     {
//       start = mid + 1;
//       result = mid;
//     }
//     else
//     {
//       end = mid - 1;
//     }
//   }

//   return result;
// }

// int main()
// {
//   long long num = 1000000000;
//   cout << "Square root of " << num << " is approximately " << basic_sqrt(num) << endl;
//   return 0;
// }

// Newton's method

#include <iostream>
#include <cmath>
using namespace std;

double optimized_sqrt(double x, double precision = 1e-10)
{
  if (x == 0)
    return 0;

  double guess = x / 2.0;
  while (fabs(guess * guess - x) > precision)
  {
    guess = (guess + x / guess) / 2.0;
  }

  return guess;
}

int main()
{
  double num = 144;
  double result = optimized_sqrt(num);
  cout << "Square root of " << num << " is approximately " << result << endl;
  return 0;
}
