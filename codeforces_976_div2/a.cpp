#include <iostream>
#include <vector>
#include <cmath>  
using namespace std;

int main()
{
    int t;
    vector<int> v1;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k > n) {
            v1.push_back(n);  
        } 
        else if(k==1){
            v1.push_back(n);
        }
        else if (n==1){
            v1.push_back(n);
        }
        else {
            
            int cnt=0;
            while (n!=0) {
                cnt+=(n%k);
                n/=k;
            }
            v1.push_back(cnt);
        }
    }
    for ( auto & it : v1){
        cout<<it<<endl;
    }
}
