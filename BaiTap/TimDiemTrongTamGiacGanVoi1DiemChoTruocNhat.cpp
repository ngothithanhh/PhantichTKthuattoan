#include<bits/stdc++.h>

using namespace std;

typedef pair<double, double> Point;
#define x first
#define y second

double distance(Point a, Point b){
    return ((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

Point nearest(Point a, Point b, Point m){
    while(fabs(a.x - b.x) > 1e-4 || fabs(a.y - b.y) > 1e-4){
        Point m1 = {(a.x + b.x)/2, (a.y + b.y)/2};

        if(distance(m,a) > distance(m,b)) a = m1;
        else b = m1;        
    }
    return a;

}

double area(Point a, Point b, Point c){
    return fabs((b.x - a.x)*(c.y - a.y) - (c.x - a.x)*(b.y - a.y))/2;
}

main(){
    cout<<setprecision(3)<<fixed;
    int q; cin >> q;
    while(q--){
        Point a, b, c, m;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> m.x >> m.y;
        Point res1 = nearest(a,b,m);
        Point res2 = nearest(b,c,m);
        Point res3 = nearest(c,a,m);
        if(area(a,b,c) == area(a,b,m) + area(a,c,m) + area(b,c,m)){
            cout << m.x << " " << m.y << endl;
            continue;
        }
        if(distance(res1,m) < distance(res2,m) && distance(res1,m) < distance(res3,m)) cout << res1.x << " " << res1.y << endl;
        else if(distance(res2,m) < distance(res1,m) && distance(res2,m) < distance(res3,m)) cout << res2.x << " " << res2.y << endl;
        else cout << res3.x << " " << res3.y << endl;
    }
}