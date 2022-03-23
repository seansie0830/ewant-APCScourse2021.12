// 新版本(2022.3.22)  升級成完整的踩地雷
// ! the matrix isn't initialized yet
#include<iostream>
using namespace std;
int width,height,bomb_num,i,j;
void show(int*,int,int);
void mark(int*);
int main(){
    // initialization
    cout<<"請輸入地圖的長"<<endl;
    cin>>width;
    cout<<"請輸入地圖的高"<<endl;
    cin>>height;
    cout<<"請輸入地雷的數量"<<endl;
    cin>>bomb_num;
    int map[height][width];
    for(int i=0;i<height;i++)for(int j=0;j<width;j++)map[i][j]=0;
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
void mark(int *map_ref) {

}