//valid invalid identifier

#include<bits/stdc++.h>

using namespace std;
void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif 
}

vector<string> op = {"+","-","*","/","%","="};
    vector<string> keywords = {
        "auto", "break", "case", "char", "const", "continue",
        "default", "do", "double", "else", "enum", "extern",
        "float", "for", "goto", "if", "int", "long", "register",
        "return", "short", "signed", "sizeof", "static",
        "struct", "switch", "typedef", "union", "unsigned",
        "void", "volatile", "while"
    };

int valid(string s){
    if(!((s[0]>='A' && s[0]<='Z') || (s[0]>='a' && s[0]<='z') || s[0]=='_')) return 0;
    for(int i=0; i<s.size(); i++){
        if(!((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') || s[i]=='_')){
            return 0;
        }
    }

    if(find(keywords.begin(),keywords.end(),s)!=keywords.end()) return 0;
    return 1;
}

int main () {
   // init();
    string s;
    getline(cin,s);
    if(valid(s)) cout<<s<<" is valid"<<endl;
    else cout<<s<<" is not valid"<<endl;
    return 0;
}