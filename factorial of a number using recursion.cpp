// #include <bits/stdc++.h>
// using namespace std;
// int fun(int n)
// {
//   if (n == 0 || n == 1)
//   {
//     return 1;
//   }
//   else
//   {
//     return n * fun(n - 1);
//   }
// }
// int main()
// {
//   int n;
//   cin >> n;

//   cout << fun(n);
// }

// let us now convert it to tail recursive function
#include <bits/stdc++.h>
using namespace std;
int fun(int n, int k)
{
  if (n == 0 || n == 1)
  {
    return k;
  }
  else
  {
    return fun(n - 1, k * n);
  }
}
int main()
{
  int n;
  int k = 1;
  cin >> n;

  cout << fun(n, k);
}