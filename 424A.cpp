// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int capX = 0;
//     int x = n / 2;
//     int smx = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == 'X')
//         {
//             capX++;
//         }
//         else if (s[i] == 'x')
//         {
//             smx++;
//         }
//     }

//     int time = 0;
//     int con;

//     if (capX == x && smx == x)
//     {
//         cout << 0 << endl;
//         cout << s << endl;
//     }
//     else
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (capX > smx)
//             {
                
//             }
//         }
//     }
//     return 0;
// }
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int choti_luli=0;
    int saksham_ka_lula=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='x')
        choti_luli++;
        else
        saksham_ka_lula++;
    }
    int ans;
    int ans1;
    if(abs(choti_luli-(n/2.0))>abs(saksham_ka_lula-(n/2.0)))
    {
        ans=abs(saksham_ka_lula-(n/2.0));
        int i=0;
        ans1=ans;
        while(ans!=0)
        {
            
            if(s[i]=='X')
            {
                s[i]='x';
                ans--;
            }
            i++;
        }
    }
    else if(abs(choti_luli-(n/2.0))<abs(saksham_ka_lula-(n/2.0)))
    {
        ans=abs(choti_luli-(n/2.0));
        ans1=ans;
        int i=0;
        while(ans!=0)
        {
            if(s[i]=='x')
            {
                s[i]='X';
                ans--;
            }
            i++;
        }
    }
    else if(saksham_ka_lula>choti_luli)
    {
         ans=abs(saksham_ka_lula-(n/2.0));
        int i=0;
        ans1=ans;
        while(ans!=0)
        {
            
            if(s[i]=='X')
            {
                s[i]='x';
                ans--;
            }
            i++;
        }
    }
    else
    {
        ans=abs(choti_luli-(n/2.0));
        ans1=ans;
        int i=0;
        while(ans!=0)
        {
            if(s[i]=='x')
            {
                s[i]='X';
                ans--;
            }
            i++;
        }
    }
    cout<<ans1<<endl<<s<<endl;
}