/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    
    int temp;
    int exception=0, result=0;
    
    cin>>temp;
    
    int arr[10]={};
    while(temp>0)
    {
        if(temp%10==6||temp%10==9)
        {
            exception++;
            temp/=10;
        }
        else{
        arr[temp%10]++;
        temp/=10;
        }
    }
    result=exception/2;
    for(auto e:arr)
    {
        
        if(e>result) {
            result=e;
        }
    }
    cout<<result;
    return 0;
}
