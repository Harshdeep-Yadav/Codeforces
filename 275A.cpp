#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==0){
                arr[i][j]=1;
            }
            else if(arr[i][j]%2==0){
                arr[i][j]=1;
            }
            else if(arr[i][j]%2!=0){
                arr[i][j]=0;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int s = a[i][j];
            if (i - 1 >= 0)
                s = s + a[i - 1][j];
            if (j - 1 >= 0)
                s = s + a[i][j - 1];
            if (i + 1 < 3)
                s = s + a[i + 1][j];
            if (j + 1 < 3)
                s = s + a[i][j + 1];
            if (s % 2 == 0)
                b[i][j] = 1;
            else
                b[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}