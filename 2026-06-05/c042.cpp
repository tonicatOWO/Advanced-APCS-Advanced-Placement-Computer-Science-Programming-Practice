#include <bits/stdc++.h>
using namespace std;

// 0=石頭  2=剪刀  5=布
// beats(x): 打敗 x 的拳
int beats(int x){
    if(x == 0) return 5;  // 布打石頭
    if(x == 2) return 0;  // 石頭打剪刀
    return 2;             // 剪刀打布
}

// robot plays c, human plays y
// return: 1=win, -1=lose, 0=tie
int result(int c, int y){
    if(c == y) return 0;
    if(beats(y) == c) return 1;
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int F, N;
    cin >> F >> N;
    vector<int> y(N);
    for(int i = 0; i < N; i++) cin >> y[i];

    vector<int> c(N);
    c[0] = F;
    for(int i = 1; i < N; i++){
        if(i >= 2 && y[i-2] == y[i-1])
            c[i] = beats(y[i-1]);
        else
            c[i] = y[i-1];
    }

    int k = N;
    string verdict = "Drew at round " + to_string(N);
    for(int i = 0; i < N; i++){
        int r = result(c[i], y[i]);
        if(r == 1){
            k = i + 1;
            verdict = "Won at round " + to_string(k);
            break;
        } else if(r == -1){
            k = i + 1;
            verdict = "Lost at round " + to_string(k);
            break;
        }
    }

    for(int i = 0; i < k; i++){
        cout << c[i];
        if(i < k - 1) cout << " ";
    }
    cout << " : " << verdict << "\n";
}
