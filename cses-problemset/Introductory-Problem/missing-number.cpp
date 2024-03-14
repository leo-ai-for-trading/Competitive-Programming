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
    ll n,j,c=0;
    cin >> n;
    for (int i = 0; i < n-1; i++)
    {
        cin>>j;
        c+=j;

    }
  //using the sum of the first n number and then you subtract the counter
    cout<<n*(n+1)/2 - c;
    return 0;
}
