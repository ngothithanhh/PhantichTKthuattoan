#include<bits/stdc++.h>

using namespace std;
int main(){
	long n;
	cin >> n;
	long a[n], res = 0, z = -INT_MAX;
	for(auto &x:a) cin>>x;
	for(int i = n-1; i>= 0; i--){
		if(z<a[i]) z = a[i];
		else res+=z-a[i];	
	}
	cout << res;
}
