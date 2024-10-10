// #include <bits/stdc++.h>
// using namespace std;
// bool isPrime(int n)
// {
//   if (n == 1)
//   {
//     return false;
//   }
//   else
//   {
//      for (int i = 2; i * i < n; i++)
//     // for (int i = 2; i < n; i++)
//     {
//       if (n % i == 0)
//       {
//         return false;
//       }
//     }
//     return true;
//   }
// }
// int main()
// {
//   int n;
//   cin >> n;
//   int res = isPrime(n);
//   if (res == 1)
//   {
//     cout << "the given number is prime ";
//   }
//   else
//   {
//     cout << "the given number is not prime ";
//   }
//   // cout << "the given number is prime ? " << res;
// }

//------------------optimized solution--------------//
#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
  if (n == 1)
  {
    return false;
  }
  if (n == 2 || n == 3)
  {
    return false;
  }
  if (n % 2 == 0 || n % 3 == 0)
  {
    return false;
  }
  else
  {
    for (int i = 5; i * i <= n; i = i + 6)
    {
      if (n % i == 0)
      {
        return false;
      }
    }
    return true;
  }
}
int main()
{
  int n;
  cin >> n;
  int res = prime(n);
  if (res == 1)
  {
    cout << "the number is prime";
  }
  else
  {
    cout << "the number is not prime";
  }
  // cout<<"the number is prime " <<res;
}
