#include<bits/stdc++.h>

using namespace std;

typedef pair<double, double> Point;
#define x first
#define y second

double square_distance(Point a, Point b){
    return ((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

Point nearest(Point a, Point m, double r){
    Point b = a;
    Point c = m;
    while(fabs(b.x - c.x) > 1e-4 || fabs(b.y - c.y) > 1e-4){
        Point m1 = {(b.x + c.x)/2, (b.y + c.y)/2};

        if(square_distance(m1,a) > r*r) c = m1;
        else b = m1;        
    }
    return b;

}

main(){
    cout<<setprecision(3)<<fixed;
    Point a, m;
    double r;
    cin >> a.x >> a.y >> r;
    cin >> m.x >> m.y;
    if(square_distance(a,m) <= r*r) cout << "(" << m.x << ", " << m.y << ")" << endl;
    else{
        Point res = nearest(a, m, r);
        cout << "(" << res.x << ", " << res.y << ")" << endl;
    }


}