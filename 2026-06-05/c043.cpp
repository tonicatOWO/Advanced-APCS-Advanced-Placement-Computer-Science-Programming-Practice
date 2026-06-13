#include <bits/stdc++.h>
using namespace std;

char lc(char c){ return islower(c) ? 'l' : 'u'; }

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int k;
    string s;
    while(cin >> k >> s){
        int g = 0, cg = 0, ck = 0;
        char pre = 'n', cur;

        if(k == 1){
            for(char c : s){
                cur = lc(c);
                cg = (pre != cur) ? cg + 1 : 1;
                g = max(g, cg);
                pre = cur;
            }
        } else {
            for(char c : s){
                cur = lc(c);
                if(pre == cur){
                    ck++;
                    if(ck == k){ cg += k; g = max(g, cg); }
                    if(ck > k)  cg = k;
                } else {
                    if(ck < k) cg = 0;
                    ck = 1;
                }
                pre = cur;
            }
        }
        cout << g << "\n";
    }
}
