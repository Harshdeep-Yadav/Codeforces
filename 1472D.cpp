#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// int main()
// {
//     int t,n;
//     cin >> t>>n;
//     vector<int> e;
//     vector<int> o;
  
//     while (t--)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             if (x % 2 == 0)
//                 e.push_back(x);
//             else
//                 o.push_back(x);
//         }
//         sort(e.begin(), e.end(),greater<>());
//         sort(o.begin(), o.end(),greater<>());

//         if(o.size()==0){
//             cout<<"Alice"<<endl;
//             return 0;
//         }
//         if(e.size()==0 && o.size()==1){
//             cout<<"Tie"<<endl;
//             return 0;
//         }
//         if(e.size()==0 && o.size()>1){
//             cout<<"Bob"<<endl;
//             return 0;
//         }

//         int i=0,j=0;
//         int p=e.size();
//         int q=o.size();
//         int c=0; // it will decide who is going to choose
//         int t1=0,t2=0;
//         while(i<p && j<q){
//             if(c==0){
//                 if(e[i]>o[j]){
//                     t1+=e[i];
//                     i++;
//                 }
//                 else{
//                     j++;
//                 }
//             }
//             else{
//                 if(e[i]<o[j]){
//                     t2+=o[i];
//                     j++;
//                 }
//                 else{
//                     i++;
//                 }
//                 c=0;
//             }
//         }
//           vector<int >other;
//                 for(int x=i;x<p;x++)
//                     other.push_back(e[x]);
//                 for(int x=j;x<q;x++)
//                     other.push_back(o[x]);
//                 for(int x=0;x<(int)other.size();x++){
//                     if(c==0){
//                         if(other[x]%2==0) t1+=other[x];
//                         c=1;
//                     }
//                     else{
//                         if(other[x]%2==1) t2+=other[x];
//                         c=0;
//                     }
//                 }
//                 if(t1>t2)
//                 cout<<"Alice";
//                 else if(t1==t2)
//                 cout<<"Tie";
//                 else 
//                 cout<<"Bob"<<endl;
//     }
//     return 0;
// }



void solve(){
                int n;
                cin>>n;
                vector<ll>e;
                vector<ll>o;
                for(int i=0;i<n;i++){
                    int x;
                    cin>>x;
                    if(x%2==0) e.push_back(x);
                    else o.push_back(x);
                }
                sort(e.begin(),e.end(),greater<>());
                sort(o.begin(),o.end(),greater<>());
                if(o.size()==0){
                    cout<<"Alice"<<"\n";
                    return;
                }
                if(e.size()==0 && o.size()==1){
                    cout<<"Tie"<<"\n";
                    return; 
                }
                if(e.size()==0 && o.size()>1){
                    cout<<"Bob"<<"\n";
                    return; 
                }
                int i=0,j=0;
                int p=e.size();
                int q=o.size();
                int c=0;
                ll t1=0,t2=0;
                while(i<p && j<q){
                    if(c==0){
                        if(e[i]>=o[j]){
                            t1+=e[i];
                            i++;
                        }
                        else{
                            j++;
                        }
                        c=1;
                    }
                    else{
                        if(e[i]<=o[j]){
                            t2+=o[j];
                            j++;
                        }
                        else{
                            i++;
                        }
                         c=0;
                    }
                }
                // cout<<"in "<<t1<<" "<<t2<<"\n";
                vector<ll>other;
                for(int x=i;x<p;x++)
                    other.push_back(e[x]);
                for(int x=j;x<q;x++)
                    other.push_back(o[x]);
                for(int x=0;x<(int)other.size();x++){
                    if(c==0){
                        if(other[x]%2==0) t1+=other[x];
                        c=1;
                    }
                    else{
                        if(other[x]%2==1) t2+=other[x];
                        c=0;
                    }
                }
                if(t1>t2)cout<<"Alice";
                else if(t1==t2)cout<<"Tie";
                else cout<<"Bob";
                cout<<"\n";
            }
            int main(){
                
                int t=1;
                cin>>t;
                for(int i=1;i<=t;i++){
                //    cout<<"Case #"<<i<<": ";
                    solve();
                }
                return 0;
            }