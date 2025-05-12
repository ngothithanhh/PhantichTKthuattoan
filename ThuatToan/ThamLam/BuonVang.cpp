#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    long a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    long res = 0;
    for(int i = 0; i < n-1; i++){
    	long max = *max_element(a+i,a+n);
    	if(a[i] < max){
    		res+= max - a[i];
		}
		else{
			res+=0;
		}
	}
    

    cout << res << endl;
}

