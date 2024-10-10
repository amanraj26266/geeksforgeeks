// #include <bits/stdc++.h>
// using namespace std;
// int count(int n)
// {
//   int fact = 1;
//   for (int i = 2; i <= n; i++)
//   {
//     fact = fact * i;
//     int res = 0;
//     while (fact % 10 == 0)
//     {
//       res++;
//       fact = fact / 10;
//     }
//     return res;
//   }
// }
// int main()
// {
//   int n = 10;
//   int res = count(n);
//   cout << res << " this the number of trailing zeroes in factorial of n";
// }

// #include <iostream>
// using namespace std;
// int countTrailingZeroes(int n)
// {
//   int count = 0;
//   for (int i = 5; n / i >= 1; i *= 5)
//   {
//     count += n / i;
//   }
//   return count;
// }
// int main()
// {
//   int n = 5;
//   int res = countTrailingZeroes(n);
//   cout << "Number of trailing zeroes in " << n << "! is: " << res << endl;
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int trail(int n)
{
  int res = 0;
  for (int i = 5; i <= n; i++)
  {
    res = res + n / i;
  }
  return res;
}
int main()
{

  int n = 5;
  int ress = trail(n);
  cout << "it is the number of trailing zero " << ress;
}