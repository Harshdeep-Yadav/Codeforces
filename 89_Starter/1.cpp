    #include <bits/stdc++.h>
    #define ll long long 
    using namespace std;
    #define pb push_back

    int main(){
        int t;
        cin>>t;
        while(t--){
            int p,q,r,s;
            cin>>p>>q>>r>>s;
            int sum=p+q+r+s;
            int maxi1=max(p,q);
            int maxi2=max(r,s);
            int maxi3=max(maxi1,maxi2);
            int res=sum-maxi3;
            if(maxi3>res){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
        return 0;
    }
