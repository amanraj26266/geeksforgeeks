#include <bits/stdc++.h>
using namespace std;
int CTOF(int c)
{
  int F = (c * 1.8) + 32;
  return F;
}
int main()
{
  int c;
  cin >> c;
  int change = CTOF(c);
  cout << change;
}