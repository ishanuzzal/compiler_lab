//function check
#include<bits/stdc++.h>

using namespace std;
void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif 
}

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
    string s,temp="",pera="";
    int psi,pei;
    vector<string> dataType = {"int","float","double","char","string","void"};
    vector<string> op = {"+","-","*","/","%","="};
    

    getline(cin,s);
    vector<string> ss;
    for(int i=0; i<s.size(); i++){
        
        if(s[i]==' '){
            ss.push_back(temp);
            temp="";
        }
        else temp += s[i];  
    }

    ss.push_back(temp);

    int f=0,i=0;
    if(find(dataType.begin(),dataType.end(),ss[i])==dataType.end()){
        f=1;
    }

    i++;
    if(!valid(ss[i])) f=1;
    i++;
    if(ss[i]=="("){
        int j=i+1;
        for(j=i+1; j<ss.size(); j++){
            if(ss[j]==")") break;
            pera+=ss[j];
            pera+=" ";
        }

        if(ss[j]!=")"){
            f=1;
        }
        else i=j+1;
    }
    else f = 1;

    if(!(ss[i]=="{" && ss[ss.size()-1]=="}")) f=1;

    if(f==1) cout<<"invalid"<<endl;
    else{
        cout<<"valid"<<endl;
        
        cout<<"function type: "<<ss[0]<<endl;
        cout<<"function name: "<<ss[1]<<endl;
        cout<<"perameter: "<<pera<<endl;
    }


    

    return 0;
}