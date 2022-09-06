#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
bool isgmail(string& s){
    string t="@gmail.com";
    int i,j;
    if(t.size()>s.size())
        return false;
    for(i=s.size()-10,j=0;i<s.size() && j<t.size();i++,j++){
        if(s[i]!=t[j]) return false;
    }
    return true;
}
int main(){
    vector<string> strarr;
    string firstName;
    string emailId;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>firstName>>emailId;
        if(isgmail(emailId))
            strarr.push_back(firstName);
    }
    sort(strarr.begin(),strarr.end());
    for(int i=0;i<strarr.size();i++){
        cout<<strarr[i]<<endl;
    }
    return 0;
}
