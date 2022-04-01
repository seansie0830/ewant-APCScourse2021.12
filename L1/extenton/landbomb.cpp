// 新版本(2022.3.22)  升級成完整的踩地雷
// TODO　ｍａｋｅ　ｓｈｏｗ　ｆｕｎｃ　ｈａｖｅ　ｓｃａｌｅ  
#include<bits/stdc++.h>
using namespace std;
int width,height,bomb_num,i,j;
void init(void);
void show(int*,int,int);
void mark(int*);
void bury_bomb(int*,int,int,int);
int main(){
    init();
    int map[height][width];
    for(int i=0;i<height;i++)for(int j=0;j<width;j++)map[i][j]=0;
    bury_bomb(&map[0][0],bomb_num,width,height);
    show(&map[0][0],width,height);
    cin>>width;
}
void show(int *map_ref,int width,int height){
    int i,j;
    for(i=0;i<height;i++){
        for(j=0;j<width;j++){
            if(*(map_ref+(i*width+j))==0) cout<<"  ?  ";
        }
        cout<<endl<<endl;
    }
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
void mark(int *map_ref) {
    int x,y;
    char cmd;
    while(true){
        cout<<"請輸入位置(ex:1 2) 最後輸入想要的動作(標記:M 取消標記:U 點開:C)"<<endl;
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
        if(cmd!="M"&&cmd!="U"&&cmd!="C"&&cmd!="m"&&cmd!="c"&&cmd!="u"){
            cout<<"動作代碼不符，請重新輸入"<<endl;
            continue;
        }
    }
    
    
}
void bury_bomb(int *map_ref,int bomb_num,int width,int height){ 
    int i; // ! bug  不夠平均分布
    for(i=0;i<bomb_num;i++){
        *(map_ref+i)=1;
    }
    for(i=0;i<100;i++){
        swap(*(map_ref+rand()%(width*height)),*(map_ref+rand()%(width*height)));
    }
}