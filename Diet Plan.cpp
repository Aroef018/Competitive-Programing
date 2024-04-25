#include <bits/stdc++.h>
using namespace std;

int susu[1000000];

int main(){
	int n, s, b;
	cin>>n>>s>>b;
	for(int i=1;i<=n;i++){
		cin>>susu[i];
	}
	
	int hari=0;
	int jumlah=0;
	for(int i=1;i<=n;i++){
		jumlah+=susu[i];
		if(jumlah<=s){
			hari=i;
		}
		if(jumlah>s&&b>0){
			sort(susu+1, susu+1+i);
			jumlah=jumlah-susu[i];
			b--;
			susu[i]=0;
			if(jumlah<=s){
				hari=i;
			}else{
				cout<<hari;
				return 0;
			}
		}
	}
	cout<<hari;
}
