// // #include <bits/stdc++.h>
// // using namespace std;

// // int findodd(int array[], int n)
// // {
// //   int x = array[0];
// //   for (int i = 1; i < n; i++)
// //   {
// //     x = x ^ array[i];
// //   }
// //   int k = (x & (~(x - 1)));
// //   int res1 = 0, res2 = 0;
// //   for (int i = 0; i < n; i++)
// //   {
// //     if ((array[i] & k) != 0)
// //     {
// //       res1 = res1 ^ array[i];
// //     }
// //     res2 = res2 ^ array[i];
// //   }
// //   cout << "the two odd occuring numbers are " << res1 << " and " << res2;
// // }

// // int main()
// // {
// //   int array[] = {4, 4, 4, 5, 5, 2, 2, 5, 88, 6};
// //   int n = sizeof(array) / sizeof(array[0]);

// //   findodd(array, n);
// // }

// #include <bits/stdc++.h>
// using namespace std;

// void findodd(int array[], int n)
// {
//   int x = 0;
//   for (int i = 0; i < n; i++)
//   {
//     x = x ^ array[i];
//   }

//   // x now holds the XOR of the two odd occurring elements
//   int k = (x & (~(x - 1))); // Get the rightmost set bit in x

//   int res1 = 0, res2 = 0;
//   for (int i = 0; i < n; i++)
//   {
//     if ((array[i] & k) != 0) // Corrected condition
//     {
//       res1 = res1 ^ array[i];
//     }
//     else
//     {
//       res2 = res2 ^ array[i];
//     }
//   }

//   cout << "The two odd occurring numbers are " << res1 << " and " << res2 << endl;
// }

// int main()
// {
//   int array[] = {4, 4, 4, 5, 5, 2, 2, 5, 88, 6};
//   int n = sizeof(array) / sizeof(array[0]);

//   findodd(array, n);
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int findodd(int array[], int n)
// {
//   int x = array[0];
//   for (int i = 1; i < n; i++)
//   {
//     x = x ^ array[i];
//   }
//   int k = (x & (~(x - 1)));
//   int res1 = 0, res2 = 0;
//   for (int i = 0; i < n; i++)
//   {
//     if ((array[i] & k) != 0)
//     {
//       res1 = res1 ^ array[i];
//     }
//     res2 = res2 ^ array[i];
//   }
//   cout << "the two odd occuring numbers are " << res1 << " and " << res2;
// }

// int main()
// {
//   int array[] = {4, 4, 4, 5, 5, 2, 2, 5, 88, 6};
//   int n = sizeof(array) / sizeof(array[0]);

//   findodd(array, n);
// }

#include <bits/stdc++.h>
using namespace std;

int findodd(int array[], int n)
{
  int x = array[0];
  for (int i = 1; i < n; i++)
  {
    x = x ^ array[i];
  }
  return x;
}

int main()
{
  int array[] = {9, 12, 2, 11, 2, 2, 10, 9, 12, 10, 9, 11, 2};
  int n = sizeof(array) / sizeof(array[0]);

  cout << findodd(array, n);
}