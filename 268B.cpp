    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        long long n;
        cin>>n;
        cout<<(n-1)*n*(n+1)/6+n<<'\n';
        return 0;
    }

// 2nd solution

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=n*(n+1)/2;
    int y=0;
    if(n>=3)
    {
       int j=1;
       for(int i=n-2;i>=1;i--)
       {
           y=y+i*j;
           j++;
       }
    }
    cout<<y+x<<endl;
    return 0;
}