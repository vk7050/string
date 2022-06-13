#include<bits/stdc++.h>
using namespace std;

void Frequency(string str)
{
  int str1[26]={0};
  for(int a=0;a<str.size();a++)
  {
    str1[(str[a]-'a')]++;
  }
  for(int a=0;a<26;a++)
  {
    if(str1[a]>0)
      cout<<(char)a<<" "<<str1[a]<<endl;
  }
}

int main()
{
  string str;
  cin>>str;
  Frequency(str);
  return 0;
}
