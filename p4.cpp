#include<bits/stdc++.h>

using namespace std;
void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif 
}

int main () {
   // init();
    string s,temp="";
    vector<string> keyword = {"int","float","double","char"};
    vector<string> op = {"+","-","*","/","%","="};
    vector<string> all;
    all.insert(all.end(),keyword.begin(),keyword.end());
    all.insert(all.end(),op.begin(),op.end());

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

    for(int i=0; i<ss.size(); i++){
        for(int j=0; j<keyword.size(); j++){
            if(ss[i]==keyword[j]){
                cout<<ss[i]<<" is a keyword"<<endl;
            }
        }
    }

    for(int i=0; i<ss.size(); i++){
        for(int j=0; j<op.size(); j++){
            if(ss[i]==op[j]){
                cout<<ss[i]<<" is a operator"<<endl;
            }
        }
    }

    for(int i=0; i<ss.size(); i++){
            if(find(all.begin(),all.end(),ss[i])==all.end()){
                cout<<ss[i]<<" is a identifer"<<endl;
            }
        
    }

    return 0;
}