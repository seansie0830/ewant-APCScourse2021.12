// �s����(2022.3.22)  �ɯŦ����㪺��a�p
// ! the matrix isn't initialized yet
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
    width_ask: cout<<"�п�J�a�Ϫ���"<<endl;
    cin>>width;
    if(width<1) {
        cout<<"�Э��s��J��s�j���Ʀr"<<endl;
        goto width_ask;
    }
    height_ask: cout<<"�п�J�a�Ϫ���"<<endl;
    cin>>height;
    if(height<1) {
        cout<<"�Э��s��J��s�j���Ʀr"<<endl;
        goto height_ask;
    }
    cout<<"�п�J�a�p���ƶq"<<endl;
    bomb_ask: cin>>bomb_num;
    if(bomb_num>width*height){ 
        cout<<"�Э��s��J��Ҧ��a�p�y��(�e*��)�ƶq�p���Ʀr"<<endl;
        goto bomb_ask;
    }
    else if(bomb_num<1){
        cout<<"�Э��s��J��s�j���Ʀr"<<endl;
        goto bomb_ask;
    }
}
void mark(int *map_ref) {

}
void bury_bomb(int *map_ref,int bomb_num,int width,int height){ 
    int i; // ! bug  ������������
    for(i=0;i<bomb_num;i++){
        *(map_ref+i)=1;
    }
    for(i=0;i<100;i++){
        swap(*(map_ref+rand()%(width*height)),*(map_ref+rand()%(width*height)));
    }
}