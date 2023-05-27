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
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i]==' '){
            for(int j=i; j<n-1; j++){
                s[j]=s[j+1];
            }
            n--;
            i--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}