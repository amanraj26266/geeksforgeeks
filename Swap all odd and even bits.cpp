#include <bits/stdc++.h>
using namespace std;
int swap(int n)
{
  int odd = 0x55555555;
  int even = 0xAAAAAAAA;
  int x = n & even;
  int y = n & odd;
  x >>= 1;
  y <<= 1;
  return x | y;
}
int main()
{
  int n;
  cin >> n;
  cout << swap(n);
}