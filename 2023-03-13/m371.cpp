#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin>>h>>w;

    vector<vector<int>> g(h+2, vector<int>(w+2,-1));

    for(int i=1;i<=h;i++)
        for(int j=1;j<=w;j++)
            cin>>g[i][j];

    int score=0;
    bool changed=true;

    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};

    while(changed){
        changed=false;

        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){

                if(g[i][j]<=0) continue;

                int val=g[i][j];

                for(int d=0;d<4;d++){

                    int x=i+dx[d];
                    int y=j+dy[d];

                    while(g[x][y]==0){
                        x+=dx[d];
                        y+=dy[d];
                    }

                    if(g[x][y]==val){
                        score+=val;
                        g[i][j]=0;
                        g[x][y]=0;
                        changed=true;
                        break;
                    }
                }
            }
        }
    }

    cout<<score<<"\n";
}
