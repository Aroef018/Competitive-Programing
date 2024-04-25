#include <bits/stdc++.h>
using namespace std;


int main(){
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	long long x,y;
	x=a*d;
	y=b*c;
	if(x==y){
		cout<<"sama";
	}else if(x>y){
		cout<<"lebih besar";
	}else{
		cout<<"lebih kecil";
	}
}
