#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>
using namespace std;
void display(int,int);
void WriteMarks(void);
int bombs=0;
int map[10][10]={0},x=0,y=0;
int main (){
    int randtmep;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++) {
            randtmep=rand()%10;
            if(randtmep==0){
                map[i][j]=-1; //bombs hidden
                bombs++;
            }
            else map[i][j]=0;//nothing but hidden
        }
    }
    display(0,0);
    while(1){
        WriteMarks();
        //if(bombs=-2) cout<<"遊戲結束(踩到地雷XD)"<<endl;
        //if (bombs==0) cout<<"恭喜過關"<<endl;
    }
}
void display(int a,int b){
    system("cls");
    cout<<"使用wasd鍵控制游標&移動，按下enter可以顯示旁邊的地雷數\n按下r標記地雷"<<endl;
    cout<<"剩下的地雷"<<bombs<<endl;
    int mapcopy[10][10],i,j;
    for(i=0;i<10;i++)for(j=0;j<10;j++)mapcopy[i][j]=map[i][j];
    mapcopy[a][b]=-2;
    for( i=0;i<10;i++){
        for( j=0;j<10;j++){
            if(mapcopy[i][j]==0||mapcopy[i][j]==-1)cout<<" * ";
            else if(mapcopy[i][j]==-2)cout<<" & ";
            else if(mapcopy[i][j]==-4||mapcopy[i][j]==-5)cout<<" X ";
            else if(mapcopy[i][j]==-10) cout<<" 0 ";
            //4->nothing and marked   5->bomb and marked
            else cout<<" "<<mapcopy[i][j]<<" ";
        }
        cout<<endl;
    }
}
void WriteMarks(void){
int ladar=0;
    char in;
    while(1){
        if(bombs==0) {
            cout<<endl<<endl<<"遊戲過關";
                exit(0);
        }
        in=getch();
        if(in=='w'&&x!=0){
            x--;
            display(x,y);
        }
        if(in=='s'&&x!=9){
            x++;
            display(x,y);
        }
        if(in=='a'&&y!=0){
            y--;
            display(x,y);
        }
        if(in=='d'&&y!=9){
            y++;
            display(x,y);
        }
        if(in=='r'){
            if(map[x][y]==-1){
                bombs--;
                map[x][y]=-5;
                continue;
            }
            else{
                map[x][y]=-4;
            }
        }
        if(in==13) {
            if(map[x][y]==-1) {
                bombs=-2;
                cout<<endl<<endl<<"遊戲失敗(踩到地雷XD)";
                exit(0);
            }
            ladar=0;
            if(map[x+1][y]==-1&&x+1<10) ladar++;
            if(map[x+1][y+1]==-1&&x+1<10&&y+1<10) ladar++;
            if(map[x+1][y-1]==-1&&x+1<10&&y-1>0) ladar++;
            if(map[x][y+1]==-1&&y+1<10) ladar++;
            if(map[x][y-1]==-1&&y-1>0) ladar++;
            if(map[x-1][y]==-1&&x-1>0) ladar++;
            if(map[x-1][y+1]==-1&&x-1>0&&y+1<10) ladar++;
            if(map[x-1][y-1]==-1&&x-1>0&&y-1>0) ladar++;
            map[x][y]=ladar;
            if(ladar==0) map[x][y]=-10;
            ladar=0;
        }
    }

}
