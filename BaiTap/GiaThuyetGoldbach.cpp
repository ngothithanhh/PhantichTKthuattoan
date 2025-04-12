#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<unsigned> prime(int n){
    vector<unsigned> res;
    bool s[n+5];
    fill(s,s+n+1,true); //lap day 
    for(int i = 2; i <=n ; i++){
        if(s[i]){
            res.push_back(i);
            for(int j = i*i; j <=n; j+=i){
                s[j] = false;
            }
        }
        
    }
    return res;
}

main(){
    int n;
    cin >> n;
    if(n < 6 || n > 100000){
        cout << 0;
    }
    else{
        vector<unsigned> res = prime(n);
        int count = 0;
        for(int i = 0; i < res.size(); i++){
            for(int j = i; j < res.size(); j++){
                for(int k = j; k < res.size(); k++){
                    if(res[i] + res[j] + res[k] == n){
                        count++;
                    }
                    else if(res[i] + res[j] + res[k] > n){
                        break;
                    }
                }
            }
        }
        cout << count;
    }
}

