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
    string s;
    cin>>s;
    int ans = 1,c = 0;
    char l = 'A';
    //logic: keep track of the max longest substring by using counter
    //got two cases when the next char is equal to l and then we add 1 to counter
    //else we set the new char as l and keep going
    for (char i : s)
    {
        if (i == l)
        {
            ++ c;
            ans = max(ans,c);
        }
        else {
            l = i;
            c = 1;
        }
    }cout<<ans;
    return 0;
}
