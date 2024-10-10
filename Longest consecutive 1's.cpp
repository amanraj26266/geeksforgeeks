#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(int N)
{
  int count = 0, maxi = 0;
  while (N > 0)
  {
    if ((N & 1) != 0)
    {
      count++;
    }
    else
    {
      count = 0;
    }
    maxi = max(maxi, count);
    N = N >> 1;
  }
  return maxi;
}

int main()
{

  int n;
  cin >> n;
  cout << maxConsecutiveOnes(n) << endl;
}