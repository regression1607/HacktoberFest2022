#include<bits/stdc++.h>
using namespace std;
int main()
{
  string S,rev;
  cout<<"Enter String To Be Checked"<<endl;
  cin>>S;
  rev=S;
  reverse(rev.begin(),rev.end());
  if(rev==S)
  {
    cout<<S<<" Is Palindrome";
  }
  else
  {
      cout<<S<<" Is Not Palindrome";
  }
}
