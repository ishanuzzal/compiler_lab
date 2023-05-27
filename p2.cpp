#include<bits/stdc++.h>

using namespace std;
void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif 
}
int main(){
    init();
    string s;
    getline(cin,s);
    /*df//df
    fdfd*/
    //*/
    int a=-1,b=-1,c=-1,d=-1;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]=='/' && s[i+1]=='/' && b==-1){
            a=i;
        }
        if(s[i]=='/' && s[i+1]=='*' && a==-1){
            b=i;
        }
        if(s[i]=='*' && s[i+1]=='/' && b!=-1) c=i;

    }

    if(a!=-1){
        for(int i=a+2; i<s.size(); i++){
            cout<<s[i];
        }
    }
    else{
        for(int i=b+2; i<c; i++){
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}