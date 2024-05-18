#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin >>s;
    vector<int>v; 
    for(int k=0;k<=n;k++){
        int t=s.length();
        string a;
        getline(cin,a);
        for(int i=0;i<a.length();i++){
            string b = a.substr(i,t);
            if(s==b){
                v.push_back(i);
            }
        }
    }
    for(auto x:v){
        cout << x<<" ";
    }
}
/*
4 Java
I love Java Programming
Java Is a Progamming Language
Pythonnnnnn
abcdderf roejo
*/
