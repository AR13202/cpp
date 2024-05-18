#include<bits/stdc++.h>
using namespace std;

void addedges(vector<int> v[],int a,int b){
    v[a].push_back(b);
    v[b].push_back(a);
}

int main(){
    int n;
    cin>>n;
    vector<int> v[n+1];
    int edges;
    cin >> edges;
    while(edges--){
        int a,b;
        cin >>a>>b;
        addedges(v,a,b);
    }
    cout << "output :\n";
    for(int i=1;i<=n;i++){
        cout << i << "-> ";
        for(auto x:v[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}