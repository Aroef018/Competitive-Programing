#include <bits/stdc++.h>
using namespace std;

void cari(int m){
	int x,y;
	x=0;
	y=0;
	int timur=1,utara=2,barat=3,selatan=4;
	while(m>0){
		int a=timur, b=utara, c=barat, d=selatan;
		while(a>0&&m>0){
			x++;
			a--;
			m--;
			if(a==0){
				timur=timur+4;
			}
		}
		while(b>0&&m>0){
			y++;
			b--;
			m--;
			if(b==0){
				utara=utara+4;
			}
		}
		
		while(c>0&&m>0){
			x--;
			c--;
			m--;
			if(c==0){
				barat=barat+4;
			}
		}
		
		while(d>0&&m>0){
			y--;
			d--;
			m--;
			if(d==0){
				selatan=selatan+4;
			}
		}
	}
	cout<<x<<" "<<y<<endl;	
}

int main(){
	int n, m;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m;
		cari(m);
	}
	//cari(1);
}