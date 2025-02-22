#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans=1; 
vector<ll> primeNum, primeVal;
ll Pow(ll a,ll b){
    ll ans=1,base=a;
    while(b){
        if(b & 1) ans*=base;
        base*=base;
        b>>=1;
    }
    return ans;
}
void CalaPrime(ll x){
	for(ll i=2;i*i<=x;i++){
		if(!x% i){
			int num=0;
			while(!x% i){
				x/=i;
				num++;
			}
			primeNum.push_back(num);
			primeVal.push_back(i);
		}
	}
	if(x>1){
		primeNum.push_back(1);
		primeVal.push_back(x);
	}
	for(unsigned int i = 0; i < primeNum.size(); i++){
    	ans*=pow(primeVal[i],primeNum[i]);
    }
}
int main(){
	CalaPrime(2021041820210418);
	cout<<ans*10;
	return 0;
}
