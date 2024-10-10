#include <bits/stdc++.h>
using namespace std;
int bitDiff(int x, int y)
{
  int a = x ^ y;
  int count = 0;
  while (a > 0)
  {
    a = a & (a - 1);
    count = count + 1;
  }
  return count;
}
int main()
{
  int x, y;
  cin >> x >> y;
  cout << bitDiff(x, y);
}