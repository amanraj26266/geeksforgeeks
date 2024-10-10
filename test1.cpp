#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

char find_lost_character(const string &stringSent, const string &stringRec)
{
  unordered_map<char, int> char_count;

  // Count each character in the sent string
  for (char ch : stringSent)
  {
    char_count[ch]++;
  }

  // Decrease the count for each character in the received string
  for (char ch : stringRec)
  {
    char_count[ch]--;
  }

  // Find the character with count greater than 0, which is the lost character
  for (const auto &pair : char_count)
  {
    if (pair.second > 0)
    {
      return pair.first;
    }
  }

  // This point should never be reached as the problem guarantees exactly one missing character
  return '\0';
}

int main()
{
  string stringSent;
  string stringRec;

  // Read input
  cin >> stringSent;
  cin >> stringRec;

  // Find and print the lost character
  char lost_character = find_lost_character(stringSent, stringRec);
  cout << lost_character << endl;

  return 0;
}
