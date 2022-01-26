// BFS 廣度優先搜尋
// 踩地雷升級版  
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
void display(int,int,int*);
void mark(void);
int x,y,cmd;
int main(){
    int c,r,bombs,i,j,randx,randy;
    srand(time(NULL));
    cout<<"請輸入行(直的)數"<<endl;
    cin>>c;
    cout<<"請輸入列(橫的)數"<<endl;
    cin>>r;
    cout<<"請輸入地雷數"<<endl;
    cin>>bombs;
    int map[r][c];
    for(i=0;i<r;i++)for(j=0;j<c;j++)map[i][j]=0;
    for(i=0;i<bombs;i++){
        while(true){
            randy=rand()%r;
            randx=rand()%c;
            if(map[randx][randy]==0){
                map[randx][randy]=1;
                break;
            }
            else continue;
            // ! 長方形死迴圈
        }
        
// todo 測試xy的正確性   長方形

    }
    while(true){
        display(r,c,&map[0][0]);
        mark();
        if(cmd==1) map[x][y]=2;
    }
    
    cout<<endl;
}
void display(int c,int r,int *map){
    system("cls");
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(*(map+i*c+j)==0||*(map+i*c+j)==1) cout<<" * ";
            else if(*(map+i*c+j)==2) cout<<" X ";
        }
        cout<<endl;
    }
    //   0  無炸彈  1 有炸彈(隱藏) 2 標記  3 
}
void  mark (void ){
    cout<<"在>>>後輸入命令(0 i j)打開(i,j)座標點 1 i j標記(i,j)為地雷 "<<endl;
    while(true){
        cout<<">>>  ";
        cin>>cmd>>x>>y;
        if(cmd!=0&&cmd!=1){
            cout<<"格式不符，請重新輸入"<<endl;
            continue;
        }
        else break;
    }
    

}