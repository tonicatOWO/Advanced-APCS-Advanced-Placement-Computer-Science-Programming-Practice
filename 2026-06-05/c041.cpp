#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    vector<int> v(n,0);
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
    int resault=0;
    for (auto i:v){
        if (i <=10){
            resault++;
        }
    }
    cout << resault;
}
