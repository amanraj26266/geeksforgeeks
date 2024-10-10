#include <bits/stdc++.h>
using namespace std;
int findroot(int a, int b, int c)
{
  int d = (b * b) - (4 * a * c);
  int square = sqrt(d);
  if (d == 0)
  {
    cout << ((-1 * b) / 2 * a);
  }
  else
  {
    if (d > 0)
    {
      cout << ((-1 * b + square) / 2 * a) << ((-1 * b - square) / 2 * a);
    }
    else
    {
      cout << "Roots are imaginary";
    }
  }
}
int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  findroot(a, b, c);
}