// upside down pyramid

#include <bits/stdc++.h>
using namespace std;
int pattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}

int main()
{
  int input;
  cin >> input;
  pattern(input);
}

// bottom up pyramid

#include <bits/stdc++.h>
using namespace std;
int pattern(int n)
{
  for (int i = 1)
}
int main()
{
  int i;
  cin >> i;
  pattern(i);
}