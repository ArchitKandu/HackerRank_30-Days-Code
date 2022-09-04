#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main() {
    string s[10];
    char ch[10][10000];
    char even[10000],odd[10000];
    int n,n1,n2;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<s[i].length();j++)
            strcpy(ch[i],s[i].c_str());
    }
    for(int i=0;i<n;i++){
        n1=0;
        for(int j=0;j<s[i].length();j++){
            if(j%2==0){
                even[n1]=ch[i][j];
                n1++;
            }
        }
        n2=0;
        for(int j=0;j<s[i].length();j++){
            if(j%2==1){
                odd[n2]=ch[i][j];
                n2++;
            }
        }
        for(int k=0;k<n1;k++)
            cout<<even[k];
        cout<<" ";
        for(int k=0;k<n2;k++)
            cout<<odd[k];
        cout<<endl;
    }
    return 0;
}
