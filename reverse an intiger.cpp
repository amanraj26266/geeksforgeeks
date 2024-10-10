#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
  int ans = 0;
  while (x != 0)
  {
    int value = x % 10;
    int ans = (ans * 10) + value;
    x = x / 10;
  }
  return ans;
}

int main()
{
  int x;
  cin >> x;
  cout << reverse(x);
}
