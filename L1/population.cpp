#include<iostream>
using namespace std;
int main (){
    int r,c,k,m,i,j,possible,migrate,x,maxpop=0,minpop=1000000,*ptr;
    cin >> r >> c >> k >> m;
    int map[r][c],change[i][j]={0};
    for(i=0; i<r; i++){
        for( j=0; j<c; j++){
            cin>>map[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(x=0;x<m;x++){
            for(int j=0; j<c; j++){
                for(i=0; i<r; i++)for(j=0;j<c;j++) change[i][j]=0;
                if(map[i][j]==-1) continue;
                possible=0;
                if(i-1>0&&map[i-1][j]!=-1) possible++;
                if(j-1>0&&map[i][j-1]!=-1) possible++;
                if(j+1<c&&map[i][j+1]!=-1) possible++;
                if(i+1<r&&map[i+1][j]!=-1) possible++;
                if(possible=0) continue;
                migrate=map[i][j]/k;
                if(i-1>0&&map[i-1][j]!=-1) change[i-1][j]=change[i-1][j]+migrate;
                if(j-1>0&&map[i][j-1]!=-1) change[i][j-1]=change[i][j-1]+migrate;
                if(j+1<c&&map[i][j+1]!=-1) change[i][j+1]=change[i][j+1]+migrate;
                if(i+1<r&&map[i+1][j]!=-1) change[i+1][j]=change[i+1][j]+migrate;
                change[i][j]=change[i][j]-migrate*possible;


            }
            for(i=0; i<r; i++)for(j=0;j<c;j++)map[i][j]=map[i][j]+change[i][j]; //refresh

        }

    }
    // for debug use
    cout<<endl;
    for(i=0 ;i<r;i++){
        for(j=0;j<c;j++){
            cout<<map[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<r*c; i++) maxpop=max(maxpop,*(&map[0][0]+i));
    for(int i=0; i<r*c; i++) {
        if(*(&map[0][0]+i)==-1) continue;
        minpop=min(minpop,*(&map[0][0]+i));
    }
    cout<<maxpop<<" "<<minpop;
    return 0;

}
