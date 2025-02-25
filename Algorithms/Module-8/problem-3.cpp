#include <bits/stdc++.h>
using namespace std;
bool vis[305][305];
int distGrid[305][305];
int dx[8] = {2,2,-2,-2,1,1,-1,-1};
int dy[8] = {1,-1,1,-1,2,-2,2,-2};
int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        int sr,sc,er,ec;
        cin>>sr>>sc>>er>>ec;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                vis[i][j]=false;
                distGrid[i][j]=-1;
            }
        }
        queue<pair<int,int>>q;
        vis[sr][sc]=true;
        distGrid[sr][sc]=0;
        q.push({sr,sc});
        while(!q.empty()){
            auto [rr,cc] = q.front();
            q.pop();
            if(rr==er && cc==ec) break;
            for(int i=0;i<8;i++){
                int nr=rr+dx[i],nc=cc+dy[i];
                if(nr>=0 && nr<r && nc>=0 && nc<c && !vis[nr][nc]){
                    vis[nr][nc]=true;
                    distGrid[nr][nc]=distGrid[rr][cc]+1;
                    q.push({nr,nc});
                }
            }
        }
        cout<<distGrid[er][ec]<<"\n";
    }
    return 0;
}