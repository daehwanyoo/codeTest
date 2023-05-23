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
    
    int x, y, z, result;
    int arr[10]={};
    cin>>x;
    cin>>y;
    cin>>z;
    
    result=x*y*z;

    while(result>0){
        arr[result%10]++;
        result=result/10;
    }
    for(int i=0; i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
