#include <bits/stdc++.h>
using namespace std;

int a[1000000];
int b[1000000];

int main(){
	int n;
	cin>>n;
	int maks=0;
	int mins=10000;
	int x,y;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
		if(a[i]>maks){
			maks=a[i];
			y=i;
		}
		if(a[i]<mins){
			mins=a[i];
			x=i;
		}
	}
	sort(b+1, b+1+n);
	int beda=1;
	for(int i=2;i<=n;i++){
		if(b[i]!=b[i-1]){
			beda++;
		}
	}	
	if(beda==1){
		cout<<"SESUAI";
		return 0;
	}
	if(beda>3){
		cout<<"TIDAK SESUAI";
		return 0;
	}
	if(mins==maks){
		cout<<"SESUAI";
		return 0;
	}
	if(n==2){
		if(a[1]==a[2]){
			cout<<"SESUAI";
			return 0;
		}
		int selisih=abs(a[1]-a[2]);
		if(selisih%2==0){
			cout<<(maks-mins)/2<<" "<<y<<" "<<x;
			return 0;
		}else{
			cout<<"TIDAK SESUAI";
			return 0;
		}
	}
	if(n>2){
		int selisih=maks-mins;
		//int p=selisih-(maks-b[2]);
		int cek=b[2]-b[1];
		//p=p-(b[2]-mins);
		if(maks-cek==b[2]){
			cout<<b[2]-b[1]<<" "<<y<<" "<<x;
			return 0;
		}else{
			cout<<"TIDAK SESUAI";
			return 0;
		}
		/*if(p>0){
			cout<<"TIDAK SESUAI";
			return 0;
		}else{
			cout<<b[2]-mins<<" "<<y<<" "<<x;
			return 0;
		}*/
	}
}
