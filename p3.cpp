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
    int a=-1, b=-1;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='"' || s[i]=='\''){
            if(a==-1) a=i;
            else b=i;
        }
    }

    for(int i=a; i<=b; i++){
        cout<<s[i];
    }
    cout<<endl;

    return 0;
}