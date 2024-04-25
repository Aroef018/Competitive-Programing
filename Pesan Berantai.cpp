#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin>>n>>k;
    long long kirim=1, terima=k;
    while(kirim<n){
        kirim++;
        terima=terima+k-1;
    }
    cout<<terima;
}
