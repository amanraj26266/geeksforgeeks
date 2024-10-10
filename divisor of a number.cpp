//-------------------using naive method to solve this problem-------------//
// #include <bits/stdc++.h>
// using namespace std;
// int divi(int n)
// {
//   for (int i = 1; i <= n; i++)
//   {
//     if (n % i == 0)
//     {
//       cout << i << " ";
//     }
//   }
// }
// int main()
// {
//   int n;
//   cin >> n;
//   divi(n);
//   // cout << " the divisors are : " << res;
// }

// ----------------this mwthod is giving the required solution but not in sorted order----------------//
//

//------------------------now we will be seeing the most optimized solution with sorted order of all divisors----------------------------//
#include <bits/stdc++.h>
using namespace std;
int divi(int n)
{
  int i;
  for (i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << " ";
    }
  }
  for (; i >= 1; i--)
  {
    if (n % i == 0)
    {
      cout << (n / i) << " ";
    }
  }
}
int main()
{
  int n;
  cin >> n;
  divi(n);
}