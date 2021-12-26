#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>
using namespace std;
void display(int,int);
void WriteMarks(void);
int map[10][10],x=0,y=0;
int main (){
    int randtmep;
    srand(time(NULL));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++) {
            randtmep=rand()%7;
            if(randtmep==0) map[i][j]=-1; //bombs hidden
            else map[i][j]=0;//nothing but hidden
        }
    }
    display(0,0);
    while(1){
        WriteMarks();
    }
    //display(0,0);

}
void display(int a,int b){
    system("cls");
    int mapcopy[10][10],i,j;
    for(i=0;i<10;i++)for(j=0;j<10;j++)mapcopy[i][j]=map[i][j];
    mapcopy[a][b]=-2;
    for( i=0;i<10;i++){
        for( j=0;j<10;j++){
            if(mapcopy[i][j]==0||mapcopy[i][j]==-1)cout<<" * ";
            else if(mapcopy[i][j]==-2)cout<<" & ";
            else cout<<" "<<mapcopy[i][j]<<" ";
        }
        cout<<endl;
    }
}
void WriteMarks(void){
 int ladar=0;
    char in;
    while(1){
        in=getch();
        if(in=='a'&&x!=0){
            x--;
            display(x,y);
        }
        if(in=='d'&&x!=9){
            x++;
            display(x,y);
        }
        if(in=='w'&&y!=0){
            y--;
            display(x,y);
        }
        if(in=='s'&&y!=9){
            y++;
            display(x,y);
        }
        if(in==13) {
            if(map[x+1][y]==-1&&x+1<10) ladar++;
            if(map[x+1][y+1]==-1&&x+1<10&&y+1<10) ladar++;
            if(map[x+1][y-1]==-1&&x+1<10&&y-1>0) ladar++;
            if(map[x][y+1]==-1&&y+1<10) ladar++;
            if(map[x][y-1]==-1&&y-1>0) ladar++;
            if(map[x-1][y]==-1&&x-1>0) ladar++;
            if(map[x-1][y+1]==-1&&x-1>0&&y+1<10) ladar++;
            if(map[x-1][y-1]==-1&&x-1>0&&y-1>0) ladar++;
            map[x][y]=ladar;
            ladar=0;
        }
    }

}
