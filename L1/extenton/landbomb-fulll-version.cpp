// BFS �s���u���j�M
// ��a�p�ɯŪ�  
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
    cout<<"�п�J��(����)��"<<endl;
    cin>>c;
    cout<<"�п�J�C(�)��"<<endl;
    cin>>r;
    cout<<"�п�J�a�p��"<<endl;
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
            // ! ����Φ��j��
        }
        
// todo ����xy�����T��   �����

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
    //   0  �L���u  1 �����u(����) 2 �аO  3 
}
void  mark (void ){
    cout<<"�b>>>���J�R�O(0 i j)���}(i,j)�y���I 1 i j�аO(i,j)���a�p "<<endl;
    while(true){
        cout<<">>>  ";
        cin>>cmd>>x>>y;
        if(cmd!=0&&cmd!=1){
            cout<<"�榡���šA�Э��s��J"<<endl;
            continue;
        }
        else break;
    }
    

}