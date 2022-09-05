#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void checkPrime(int a){
    if(a==1){
        cout<<"Not prime"<<endl;
        return;
    }
    if(a==2||a==3){
        cout<<"Prime"<<endl;
        return;
    }
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            cout<<"Not prime"<<endl;
            return;
        }
    }
    cout<<"Prime"<<endl; 
}
int main() {
    int n;
    cin>>n;
    int a;
    int count=0,temp=0;
    while(n--){
        cin>>a;
        checkPrime(a);
    }
    return 0;
}
