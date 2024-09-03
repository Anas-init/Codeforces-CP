#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<string.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v1;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            v1.push_back(0);
        }
        else{
            v1.push_back(b-a);
        }
        
    }
    for(auto &it: v1){
        cout<<it<<endl;
    }
}