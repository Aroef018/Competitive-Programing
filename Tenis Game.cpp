#include <bits/stdc++.h>
using namespace std;

int main(){
	long long k,s,n;
	cin>>k>>s>>n;
	if((k*s)>n){
		cout<<"NO";
		return 0;
	}
	n=n-(k*s);//sisa point
	
	long long cek=(k-2)*s;
	if(n<=cek){
		cout<<"YES";
		return 0;
	}
	/*n=n-cek;
	if(n%s==0){
		cout<<"YES";
		return 0;
	}else{
		cout<<"NO";
		return 0;
	}*/
	if(k==2){
		//n=n-(k*s);
		if(n%2==1){
			cout<<"NO";
			return 0;
		}else{
			cout<<"YES";
			return 0;
		}
	}
	if(s==1){
		//cout<<"masuk s=1"<<endl;
		//cout<<"s="<<s<<"k="<<k<<"n="<<n<<endl;
		//n=n-k;
		n=n-(k-2);
		if(n%2==0){
			cout<<"YES";
			return 0;
		}else{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	
}
