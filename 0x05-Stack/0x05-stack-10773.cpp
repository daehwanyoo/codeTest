/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> s;
    
    int k;
    cin>>k;
    int result=0;
    while(k--)
    {
        int n;
        cin>>n;
        if(n!=0){
            s.push(n);
        }
        else
            s.pop();
    }
    
    while(!s.empty()){
        result+=s.top();
        s.pop();
    }
    cout<<result;
}
