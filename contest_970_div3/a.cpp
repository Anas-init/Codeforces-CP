#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<string.h>
using namespace std;
string helper(int a, int b){
    if(b==0 && a%2==0){
        return "YES";
    } 
    else if(b==0 && a%2!=0){
        return "NO";
    }
    if(a==0 && b%2==0){
        return "YES";
    } 
    else if(a==0 && b%2!=0){
        return "NO";
    }
    int a_val=a;
    int b_val=b*2;
    if((a_val+b_val)%2==0){
        return "YES";
    }
    else{
        return "NO";
    }

}
int main(){
    int t;
    cin>>t;
    vector<string> v1(t);
    while (t--)
    {
        int a,b;
        cin>>a>>b;
    
        v1.push_back(helper(a,b));
    }
    for( auto & it : v1){
        cout<< it<<endl;
    }
    
     
}