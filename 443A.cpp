// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     set<char>st;
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='a' && s[i]<='z')
//         st.insert(s[i]);
//     }
//     cout<<st.size()<<endl;
   
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set <char> a;
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        if(isalpha(s[i]))
            a.insert(s[i]);
    }
    cout<<a.size()<<endl;
    return 0;
}