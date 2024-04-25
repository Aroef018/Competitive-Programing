#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n ;
    string a , b;
    cin >> a >> b;
    int sum = 0 ;
        for (int i = 0; i < n ; i++ ) {
            if ( a[i] > b[i] ) {
                sum++;
                while ( a[i] >= b[i] ){
                    i++;
                }
            }
        }
    cout << sum;
}