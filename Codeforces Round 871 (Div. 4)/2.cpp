// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     int n;
//     int z = 0;
//     int maxi = 0;
//     int arr[n];
//     while (t--)
//     {
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] == 0)
//             {
//                 ++z;
//             }else{
//             maxi = max(maxi, z);
//             z=0;
//             }
//         }
//          maxi = max(maxi, z);

//         cout << maxi << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      
      int a[n];
      
      for(int i = 0; i < n; i++){
          cin >> a[i];
      }
      int cnt = 0;
      int maxi = 0;
      
      for(int i = 0; i<n; i++){
         if(a[i]==0){
            ++cnt;
         }
         else{
            maxi = max(maxi, cnt);
            cnt = 0;
         }
      }
      
      maxi = max(maxi, cnt);
      
      cout << maxi << endl;
   }
 return 0;
}
