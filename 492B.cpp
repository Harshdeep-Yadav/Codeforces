    #include<bits/stdc++.h>
    using namespace std;    

    int main(){
        int n,l;
        cin>>n>>l;
        int res;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);
        
        res=max(a[0],l-a[n-1])*2;

        for(int i=0;i<n-1;i++){
            res=max(res,a[i+1]-a[i]);
        }

        cout.precision(10);
        cout<<fixed<<res/2.0<<endl;
    }