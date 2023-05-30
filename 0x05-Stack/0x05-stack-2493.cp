#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int>s;
    int arr[sizeof(s)];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        s.push(temp);
    }
    int Max=0;
    while(n--){
        if(s.top()>Max)
            Max=s.top();
    }
}
