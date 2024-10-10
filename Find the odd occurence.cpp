#include <bits/stdc++.h>
using namespace std;

int findodd(int array[], int n)
{
  int res = array[0];
  for (int i = 1; i < n; i++)
  {
    res = res ^ array[i];
  }
  return res;
}

int main()
{
  int array[] = {4, 4, 4, 5, 5, 2, 2};
  int n = sizeof(array) / sizeof(array[0]);

  int result = findodd(array, n);
  cout << "The odd occurring element is: " << result << endl;
  return 0;
}
