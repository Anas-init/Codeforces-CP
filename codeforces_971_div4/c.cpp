#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
unsigned long long  helper(long double x, long double y,long double k){
    if(!x && !y) return 0;
    long double d_x=ceil(x/k);
    long double d_y=ceil(y/k);
    if (d_x<d_y) return  (2 * max(d_x ,d_y));
    else if (d_x >d_y){
        return  ((2 * max(d_x ,d_y))-1);
    }
    else{
        return (2 * d_x);
    }

}
int main() {
    int t;
    cin >> t; 
    vector<unsigned long long>v1;
    while (t--) {
        long double x, y, k;
        cin >> x >> y >> k;
        v1.push_back(helper(x, y, k));
    }
    for (auto &it: v1){
        cout<<it<<endl;
    }
    return 0;
}
