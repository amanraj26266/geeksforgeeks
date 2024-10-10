//doing this question using the two pinter method
#include <bits/stdc++.h>
using namespace std;
int news(vector<int> &n)
{
  if (n.size() < 3)
  {
    return n.size();
  }
  int pointer = 2; // it holds the address location of index 2 and indexes are starting from 0
  for (int i = 2; pointer < n.size(); i++)
  {
    if (n[i] != n[pointer - 2])
    {
      n[pointer++] = n[i];
    }
  }
  return pointer;
}
int main()
{
  vector<int> arr = {1, 1, 1};
  cout << news(arr);
}