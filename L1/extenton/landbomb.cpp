// 新版本(2022.3.22)  升級成完整的踩地雷
// TODO　ｍａｋｅ　ｓｈｏｗ　ｆｕｎｃ　ｈａｖｅ　ｓｃａｌｅ  
#include<bits/stdc++.h>
#define BOMB_ID -1 // todo define it
#define BOMB_MARK_ID -2
#define NOTHING_ID -3
#define NOTHING_MARK_ID -4
#define ptr2xy(x,y) *(refs+(x*width+y))  // abbr
using namespace std;
int width,height,bomb_num,i,j;
void init(void);
void show(int*,int,int);
void mark(int*);
void bury_bomb(int*,int,int,int);
void visit(int,int,int*);
int check_4way(int,int,int*);
int main(){
    /*
    init();
    int map[height][width];
    for(int i=0;i<height;i++)for(int j=0;j<width;j++)map[i][j]=0;
    bury_bomb(&map[0][0],bomb_num,width,height);
    while(true){
        show(&map[0][0],width,height);
        mark(&map[0][0]);
    }
    return 0;
    */
    height=10;
    width=10;
    int map[10][10]={0};
    cout<<endl;
    bury_bomb(&map[0][0],10,width,height);
    visit(5,5,&map[0][0]);
    return 0;
}
void show(int *refs,int width,int height){
    system("cls");
    int i,j;
    for(i=0;i<height;i++){
        for(j=0;j<width;j++){
            if(ptr2xy(i,j)==0||ptr2xy(i,j)==-1) cout<<"  ?  ";
            else if(ptr2xy(i,j)==-2) cout<<"  V  ";
            else if(ptr2xy(i,j)>0) cout<<" "<<ptr2xy(i,j)<<" ";
        }
        cout<<endl<<endl;
    }
}
int check_4way(int x,int y,int *refs){  // ! boder ckeck
    int count=0;  // * fixed
    if(ptr2xy(x-1,y)==BOMB_ID) count++;
    if(ptr2xy(x+1,y)==BOMB_ID) count++;
    if(ptr2xy(x,y+1)==BOMB_ID) count++;
    if(ptr2xy(x,y-1)==BOMB_ID) count++;
    return count;
}
void init(){
    srand(time(NULL));
    width_ask: cout<<"請輸入地圖的長"<<endl;
    cin>>width;
    if(width<1) {
        cout<<"請重新輸入比零大的數字"<<endl;
        goto width_ask;
    }
    height_ask: cout<<"請輸入地圖的高"<<endl;
    cin>>height;
    if(height<1) {
        cout<<"請重新輸入比零大的數字"<<endl;
        goto height_ask;
    }
    cout<<"請輸入地雷的數量"<<endl;
    bomb_ask: cin>>bomb_num;
    if(bomb_num>width*height){ 
        cout<<"請重新輸入比所有地雷座標(寬*高)數量小的數字"<<endl;
        goto bomb_ask;
    }
    else if(bomb_num<1){
        cout<<"請重新輸入比零大的數字"<<endl;
        goto bomb_ask;
    }
}
void visit(int x,int y,int *refs){  // wish there is no bug
    if(ptr2xy(x+1,y)<0) visit(x+1,y,refs);
    if(ptr2xy(x-1,y)<0) visit(x-1,y,refs);
    if(ptr2xy(x,y-1)<0) visit(x,y-1,refs);
    if(ptr2xy(x,y+1)<0) visit(x,y+1,refs);
    ptr2xy(x,y)=check_4way(x,y,refs);
    return ;
}
void mark(int *refs) {
    int x,y;
    char cmd;
    while(true){
        cout<<"請輸入位置(ex:1 2) 最後輸入想要的動作(標記:M 取消標記:U 點開:C 退出 Q)"<<endl;
        cin>>x>>y>>cmd;
        // checkpoint
        if(x<0){
            cout<<"x座標小於0，格式錯誤。"<<endl;
            continue;
        }
        if(y<0){
            cout<<"y座標小於0，格式錯誤"<<endl;
            continue;
        }
        if(cmd!='M'&&cmd!='U'&&cmd!='C'&&cmd!='m'&&cmd!='c'&&cmd!='u'&&cmd!='Q'&&cmd!='q'){
            cout<<"動作代碼不符，請重新輸入"<<endl;
            continue;
        }
        break;
    }
    if(cmd=='M'||cmd=='m'){
        ptr2xy(x,y)=-2;
    }
    if(cmd=='U'||cmd=='u'){
        ptr2xy(x,y)=0;
    }
    if(cmd=='C'||cmd=='c'){
        
    }
    if(cmd=='q'||cmd=='Q') {
        cout<<endl<<"已退出系統"<<endl;
        exit(0);
    }
}
void bury_bomb(int *map_ref,int bomb_num,int width,int height){ 
    int i; // ! bug  不夠平均分布
    for(i=0;i<bomb_num;i++){
        *(map_ref+i)=-1;
    }
    for(i=0;i<100;i++){
        swap(*(map_ref+rand()%(width*height)),*(map_ref+rand()%(width*height)));
    }
}