#include<iostream>
using namespace std;
int main (){
    int r=3,c=2,m=3,temp,act;
    while(cin>>r>>c>>m){
        int martix[10][10];
        for(int i=0;i<r;i++)for(int j=0;j<c;j++)cin>>martix[i][j];
        for(int i=0;i<m;i++){
        cin>>act;
            if(act==0){
                swap(r,c);
                int matrix_rotated[10][10];
                    for(int i=0;i<r;i++)for(int j=0;j<c;j++)matrix_rotated[i][j]=martix[c-1-j][i];
                    for(int i=0;i<r;i++)for(int j=0;j<c;j++)martix[i][j]=matrix_rotated[i][j];
        }
        else {
            for(int i=0;i<r/2;i++){
                for(int j=0;j<c;j++)
                    swap(martix[i][j],martix[r-i-1][j]);//因為索引的第一個元素是0，不是r-i是r-i-1
                }
            }
        }
    cout<<r<<" "<<c<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<martix[i][j];
            if(c-j>1){
                cout<<" ";
            } 
            else continue;
        } 
        cout<<endl;
    }
    }
    return 0;
}
