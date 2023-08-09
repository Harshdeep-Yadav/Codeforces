//     // #include <bits/stdc++.h>
//     // using namespace std;

//     // int solve(int num)
//     // {
//     //     string s = to_string(num);
//     //     int n = s.size();
//     //     int sum = 0;
//     //     string res;
//     //     int l = 0;
//     //     int h = n - 1;
//     //     while (l <= h)
//     //     {
//     //         string x = s[l];
//     //         string y = s[h];
//     //         l++;
//     //         h--;
//     //         res += x + y;
//     //         sum = sum + stoi(res);
//     //     }
//     //     cout << sum;
        
//     // }

//     // int main()
//     // {
//     //     int n;
//     //     cin >> n;
//     //     return solve(n);
//     // }

 
//  #include <bits/stdc++.h>
// using namespace std;

// int solve(int num)
// {
//     string s = to_string(num);
//     int n = s.size();
//     int sum = 0;
//     string res;
//     int l = 0;
//     int h = n - 1;
//     while (l <= h)
//     {
//         char x = s[l]; // Change string to char
//         res+=x;
//         l++;
//         char y = s[h]; // Change string to char
//         res += y;
//         h--;
        
//         sum = sum + stoi(res);
//     }
//     cout << sum;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     solve(n);
//     return 0; // Return 0 to indicate successful execution.
// }


#include<bits/stdc++.h>
using namespace std;


void solve(vector<int> &nums)
{
	vector<int> ans;
	int n =  nums.size();
	for (int i = 0; i < n / 2; i++)
	{
		int a = nums[i];
		int b = nums[n - i - 1];

		string s1 = to_string(a);
		string s2 = to_string(b);

		string s = s1 + s2;
		int sum = stoi(s);
		ans.push_back(sum);
	}

	for (auto it : ans)
	{
		cout << it << " ";
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r", stdin);
	freopen("output.txt" , "w", stdout);
#endif

	vector<int> vect(4);
	for (auto &it  : vect )
	{
		cin >> it;
	}
	vector<int> ans ;
	solve(vect);
}