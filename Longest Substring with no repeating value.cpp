#include<bits/stdc++.h>
using namespace std;
string longestSubString(string s)
{
  for(int i =0 ; i<s.size(); i++){
    int hash[256] = {0};
    for(int j = 0; j<s.size();j++){
      if(hash[s[j]]==1){
        break;
      }
      int len = j-i+1;
    }
  }
} 
int main(){
  string s  = "aaabsdeabscd";
  cout<<longestSubString(s);
} 