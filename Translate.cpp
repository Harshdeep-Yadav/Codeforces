#include<bits/stdc++.h>
using namespace std;

int main()
{
      int y;
      cin>>y;
      while(1){
            y++;
            int a=y/1000; // 1st digit
            int b=y/100%10; // 2nd digit
            int c=y/10%10; // 3rd
            int d=y%10; // 4th
            cout<<a<<'\t';
            cout<<b<<'\t';cout<<c<<'\t';cout<<d<<'\t';
            if(a!=b && a!=c &&a!=d && b!=c&&b!=d&& c!=d){
                  break;
            }
      }
      cout<<y<<endl;
      return 0;
}