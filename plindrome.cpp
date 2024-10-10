#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
  int rev = 0;
  int temp = n;
  while (temp > 0)
  {
    int ld = temp % 10;
    rev = rev * 10 + ld;
    temp = temp / 10; // This should be integer division
  }
  return (rev == n);
}

int main()
{
  int n = 242;
  if (isPalindrome(n))
  {
    cout << n << " is a palindrome." << endl;
  }
  else
  {
    cout << n << " is not a palindrome." << endl;
  }
  return 0;
}
