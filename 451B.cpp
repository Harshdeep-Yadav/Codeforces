#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int s[n];
    int cnt = 0 ;
    int seg = 0;
    int l, r;
     for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s[i]=a[i];
        }

        sort(s,s+n);
        for(int i=0;i<n;i++)
        {
            if(s[i]==a[i])
                cnt++;
        }

        if(cnt==n)
        {
            cout<<"yes\n1 1";
            return 0;
        }
    
          for(int i=0;i<n-1,seg<1;)
        {
            if(a[i]<a[i+1])
            {
                i++;
            }

            else
            {
                l=i;
                r=i;
               while(a[i]>a[i+1] && i<n-1)
               {
                   i++;
                   r++;
               }

               sort(a+l,a+r+1);
               seg++;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(s[i]!=a[i])
            {
                cout<<"no";
                return 0;
            }
        }

    cout << "yes" << endl;
    cout << l + 1 << " " << r + 1 << endl;
    return 0;
};
