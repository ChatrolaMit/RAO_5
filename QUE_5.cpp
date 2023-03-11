#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;


#include <bits/stdc++.h>
#include<vector>  

void hlp( vector<vector<int>> arr){
    long long int n, d, sm = 0, j = 0;
    cin >> n >> d;

    vector<int> res(5, 0);
    for (int i = 0; i < 5; i++)
    {
        // atleast one plant
        res[i] = (d / arr[i][0]) * arr[i][1];
        if (arr[i][0] <= d)
            sm += res[i];
    }

    sort(res.begin(), res.end(), greater<int>());

    // 40% plantation
    int per = (n * .4) - 1.0;
    n -= 5;

    while (n > 0 && j < 5)
    {
        if (n < per)
        {
            sm += n * res[j];
            break;
        }
        sm += (per * res[j++]);
        n -= per;
    }

    cout << sm << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    
    vector<vector<int>> arr = {
        {10, 12000} // days,profit after days
        ,
        {6, 10000},
        {15, 27500},
        {5, 7500},
        {15, 8000}};
    int l = 1;
    cin >> l;
    while (l--)
    {
        hlp(arr);
    }





    return 0;
}
