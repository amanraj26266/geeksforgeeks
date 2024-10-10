#include <bits/stdc++.h>
using namespace std;
int Count(int n)
{
  // ---------------------this one is the first type to find set bits --------------------//
  // //   //   int count = 0;
  // //   //   while (n > 0)
  // //   //   {
  // //   //     // just changed the  if (n % 2 == 1) to  if ((n & 1) != 0) because bitwise and operator works faster than % operator
  // //   //     // if (n % 2 == 1)
  // //   //     if ((n & 1) != 0)
  // //   //     {
  // //   //       count++;
  // //   //     }
  // //   //     n = n / 2;
  // //   //   }
  // //   //   return count;
  int count = 0;
  while (n > 0)
  {
    n = n & (n - 1);
    count = count + 1;
  }
  return count;
}
int main()
{
  int n;
  cin >> n;
  int res = Count(n);
  cout << res;
}

//-----------------------lookup table approach ---------------------//
// #include <bits/stdc++.h>
// using namespace std;
// int table[256]; // making a lookup table
// int initialize()
// { //-----------making the table initialize
//   table[0] = 0;
//   for (int i = 1; i < 256; i++)
//   {
//     table[i] = table[i & (i - 1)];
//   }
// }
// int count(int n) // writing the functionn to do the task in O(1)
// {
//   return table[n & 256] + table[(n >> 8) & 256] + table[(n >> 16) & 256] + table[(n >> 24)];
// }
// int main()
// {
//   int n;
//   cin >> n;
//   int res = count(n);
//   cout << res;
// }
