#include <bits/stdc++.h>
using namespace std;
long long long solve(vector <int> a, int k, int n)
{
    sort(a,a+n);
    long long res = 0;
    for (int i = 0; i < n; i++) {
        int j=i;
        while (j<n && abs(a[j]-a[i])<=k) {
            res++;
            j++;
        }
    }
    return res;
}
int main()
{
   int n,k,ans;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
        cin>>a[i];
   cout << countPairs(a, n, k) << endl;
    return 0;
}
