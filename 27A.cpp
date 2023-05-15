    #include <bits/stdc++.h>
    using namespace std;

    int findDefault(int n, int *arr)
    {
        unordered_set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(arr[i]);
        }
        int value = 1;
        while (st.count(value) > 0)
        {
            value++;
        }
        return value;
    }
    int main()
    {
        int n;
        cin >> n;
        int arr[10000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << findDefault(n, arr) << endl;
    }
