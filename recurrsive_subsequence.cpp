#include<bits/stdc++.h>
using namespace std;

bool Subsequence(string &str,string &str1,int n,int m)
{
  if(m==0)
    return true;
  if(n==0)
    return false;
  if(str[n-1]==str1[m-1])
    return Subsequence(str,str1,n-1,m-1);
  return Subsequence(str,str1,n-1,m);
}
     

int main()
{
  string str,str1;
  cin>>str;
  cin>>str1;
  bool a=Subsequence(str,str1,str.length(),str1.length());
  cout<<a<<endl;
  return 0;
}
