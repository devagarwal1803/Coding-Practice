#include<bits/stdc++.h>
using namespace std;
int binarySearchCount(int arr[], int n, int key)
{
    int left = 0, right = n;
    int mid;
    while (left < right)
    {
        mid = (right + left) >> 1;
        if (arr[mid] == key)
        {
            while (mid+1<n && arr[mid+1] == key)
                 mid++;
            break;
        }
        else if (arr[mid] > key)
            right = mid;
        else
            left = mid + 1;
    }
    while (mid > -1 && arr[mid] > key)
        mid--;
    return mid + 1;
}
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n)
    for(i=0;i<n;i++)
    {


    }
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearchCount(arr, n, key);
    return 0;
}
