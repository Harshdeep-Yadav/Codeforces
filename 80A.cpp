#include <iostream>
using namespace std;

int main() 
{
	int n,m;
	cin>>n>>m;
	int flag=0;
	int cnt=0;
	   for(int p=n+1;p<=m;p++){
	       cnt=0;
	       for(int i=2;i<=(p/2)+1;i++){
	           if(p%i==0){
	               cnt++;
	           }
	     }
	     if(cnt==0){
	         if(p==m){
	         cout<<"YES"<<endl;
	         flag=1;
	         break;
	         }
	        else{
	        cout<<"NO"<<endl;
	         flag=1;
	         break;
	         }
	     }
	}
	if(!flag){
	    cout<<"NO"<<endl;
	}
	return 0;
}