#include <bits/stdc++.h>
using namespace std;
bool anagram(string a, string b)
{
  if (a.size() != b.size())
  {
    return false;
  }
  vector<int> count(15);
  for (int i = 0; i < a.size(); i++)
  {
    count[a[i] - 'a']++;
  }
  for (int i = 0; i < b.size(); i++)
  {
    int x = count[b[i] - 'a']--;
    if (x < 0)
    {
      return false;
    }
  }
  return true;
}
int main()
{
  string a;
  string b;
  cin >> a >> b;
  int res = anagram(a, b);
  if (res == 1)
  {
    cout << "yes it is ";
  }
  else
  {
    cout << "no it is not ";
  }
}