//***********************first of all we we see a normal recursion then we will find a soloutiion that is more optimal using tail recursion */
// #include <bits/stdc++.h>
// using namespace std;
// int fun(int n)
// {
//   if (n == 0)
//   {
//     return 0;
//   }
//   else
//   {
//     fun(n - 1);
//     cout << n;
//   }
// }
// int main()
// {
//   int n;
//   cin >> n;
//   fun(n);
//   return 0;
// }

// let us take a look on tail recursive method to solve the same problem
#include <bits/stdc++.h>
using namespace std;
int fun(int n, int k)
{
  if (n == 0)
  {
    return 0;
  }
  else
  {
    cout << k;
    fun(n - 1, k + 1);
  }
}
int main()
{
  int n;
  int k;
  cin >> n >> k;
  fun(n, k);
  return 0;
}