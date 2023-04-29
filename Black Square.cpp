
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a1,a2,a3,a4;
  cin>>a1>>a2>>a3>>a4;
  string s;
  cin>>s;
  int i,sum=0;
  int l;



  for(i=0;;i++)
  {
      if(s[i]=='1'){sum=sum+a1;}
      if(s[i]=='2'){sum=sum+a2;}
      if(s[i]=='3'){sum=sum+a3;}
      if(s[i]=='4'){sum=sum+a4;}
      if(s[i]=='\0'){break;}


  }
  cout<<sum<<"\n";





    return 0;
}

