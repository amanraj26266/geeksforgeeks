// #include <bits/stdc++.h>
// using namespace std;
// int check(int n)
// {
//   int count = 0;
//   for (int i = 1; i <= n; i++)
//   {
//     int a = i;
//     while (a > 0)
//     {
//       a = a & (a - 1);
//       count = count + 1;
//     }
//   }
//   return count;
// }
// int main()
// {
//   int n;
//   cin >> n;
//   cout << check(n);
// }

//------------------------optimized one will be ----------------------//
#include <bits/stdc++.h>
using namespace std;

int largestPowerOf2(int n)
{
  int x = 0;
  while ((1 << x) <= n)
  {
    x++;
  }
  return x - 1;
}

int countSetBits(int n)
{
  if (n == 0)
    return 0;

  int x = largestPowerOf2(n);

  int bitsUpTo2x = x * (1 << (x - 1));
  int msb2xton = n - (1 << x) + 1;
  int rest = n - (1 << x);

  return bitsUpTo2x + msb2xton + countSetBits(rest);
}

int main()
{

  int n;
  cin >> n;
  cout << countSetBits(n) << endl;
}
