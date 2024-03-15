#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++);
typedef long long ll;
using namespace std;
typedef long long int lli;
#define nl "\n";

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    //logic: consider the edge case and then think about the odd and even numeber
    // even number: we iterate starting from 2 and then from 1 by adding 2 
    // odd number: we iterate backwards starting from n and subtract 2
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    
    if (n == 2 || n == 3) 
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    if (n % 2 == 0)
    {
        for (int i = 2; i <= n; i+=2)
        {
            cout << i << " ";
        }
        for (int i = 1; i < n; i+=2)
        {
            cout << i << ' ';
        }
    }
    else
    {
        for (int i = n-1; i > 0; i-=2)
        {
            cout << i << ' ';
        }
        for (int i = n; i > 0; i-=2)
        {
            cout << i << ' ';
        }
            
    }
    
    
    return 0;
}
