//尚未完成 施工中 XD
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,i,j,x,y,path=0,minPos=1000000,minX,minY,dir[4],mintemp=1000000,mindir;
    cin>>n>>m;
    int map[n][m]={0},walk[n][m]={0};
    for(i=0;i<n;i++)for(j=0;j<m;j++)cin>>map[i][j];
    for(i=0;i<n;i++)for(j=0;j<m;j++){
        if(minPos>map[i][j]){
            minPos=map[i][j];
            minX=i;
            minY=j;
        }
    };
    //cout<<minX<<" "<<minY<<endl;
    x=minX;
    y=minY;
    while(1){
        mintemp=1000000;
        path+=map[x][y];
        walk[x][y]=1;
        if(y!=0) dir[0]=map[x][y-1];
        if(y<n) dir[1]=map[x][y+1];
        if(x!=0) dir[2]=map[x-1][y];
        if(x<m) dir[3]=map[x+1][y];
        for(i=0;i<4;i++){
            if(mintemp>dir[i]){
                mintemp=dir[i];
                mindir=i;
            }
        }

    }
}
