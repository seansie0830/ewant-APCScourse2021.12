// �s����(2022.3.22)  �ɯŦ����㪺��a�p
// ! the matrix isn't initialized yet
#include<iostream>
using namespace std;
int width,height,bomb_num,i,j;
void show(int*,int,int);
void mark(int*);
int main(){
    // initialization
    cout<<"�п�J�a�Ϫ���"<<endl;
    cin>>width;
    cout<<"�п�J�a�Ϫ���"<<endl;
    cin>>height;
    cout<<"�п�J�a�p���ƶq"<<endl;
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