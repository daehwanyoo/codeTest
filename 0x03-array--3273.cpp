/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int arr[1000000]={};
bool occur[2000001];
int n,x;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int ans=0;
    cin>>x;
    
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    
    cin>>n;
    
    for(int i=0;i<x;i++){
        if(n-arr[i]>0&&occur[n-arr[i]]) ans++;
        occur[arr[i]]=true;
    }
    cout<<ans;

    return 0;
}
