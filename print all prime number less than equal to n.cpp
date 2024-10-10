// //-------------------------------here we had done this problem using naive solution ------------------//////
// #include <iostream>
// using namespace std;

// bool isPrime(int n)
// {
//   for (int i = 2; i * i <= n; i++)
//   {
//     if (n % i == 0)
//     {
//       return false;
//     }
//   }
//   return true;
// }

// int main()
// {
//   int n;
//   cout << "Enter a number: ";
//   cin >> n;

//   cout << "The prime numbers less than or equal to " << n << " are: ";
//   for (int i = 2; i <= n; i++)
//   {
//     if (isPrime(i))
//     {
//       cout << i << " ";
//     }
//   }
//   cout << endl;

//   return 0;
// }

// ------------------form here we will be trying sieve method to solve this problem-----------------//
#include <bits/stdc++.h>
using namespace std;
void sieve(int n)
{
  vector<bool> isprime(n + 1, true);
  for (int i = 2; i * i <= n; i++)
  {
    if (isprime[i])
    {
      for (int j = 2 * i; j <= n; j = j + i)
      {
        isprime[j] = false;
      }
    }
  }
  for (int i = 2; i <= n; i++)
  {
    if (isprime[i])
    {
      cout << i << " ";
    }
  }
}
int main()
{
  int n;
  cin >> n;
  sieve(n);
}