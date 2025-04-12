#include<bits/stdc++.h>
using namespace std;

int d[1000]={};


void Try(int *x, int k, int n){
	
	if(k-1==n){
		for(int i = 1; i <= n; i++){
			cout << x[i] << (i==n?"\n":" ");
		}
	}
	else{
		for(int t = 1; t<=n; t++){
			int ok=1;
			for(int i=1; i<k; i++){
				if(t==x[i]) ok = 0;
			}
			if(ok==1){
				x[k] = t;
				Try(x,k+1,n);
			}
		}
	}
	
}
//void Try(int *x, int k, int n){
//	
//	if(k-1==n){
//		for(int i = 1; i <= n; i++){
//			cout << x[i] << (i==n?"\n":" ");
//		}
//	}
//	else{
//		for(int t = 1; t<=n; t++){
//			if(d[t]==0){
//				d[t]=1;
//				x[k]=t;
//				Try(x,k-1,n);
//				d[t]=0;
//			}
//		}
//	}
//	
//}

main(){
	int x[100],n;
	cin >> n;
	Try(x,1,n);
	
}
