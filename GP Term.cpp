#include <bits/stdc++.h>
using namespace std;
double gp(double a, double b, double n)
{
  double r = b / a;
  double res = a * pow(r, (n - 1));
  cout << floor(res);
}
int main()
{
  double a, b, n;
  cin >> a >> b >> n;
  gp(a, b, n);
}