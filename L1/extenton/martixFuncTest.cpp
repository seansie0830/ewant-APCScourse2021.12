//轉置([i][j]->[j][i])不等於旋轉!!!!!!!!!
#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main (){
    int r=3,c=2,ctr1,ctr2,i,j;
    cin>>r;/*>>m*/;
    c=r;
    int martix[200][200];
    for(i=0;i<r;i++)for(j=0;j<c;j++)cin>>martix[i][j];
    int matrix_rotated[200][200];
    for( i=0;i<r;i++)for(j=0;j<c;j++)matrix_rotated[i][j]=martix[j][i];
    for( i=0;i<r;i++)for(j=0;j<c;j++)martix[i][j]=matrix_rotated[i][j];
    for(ctr1=0;ctr1<r;ctr1++){
        for( ctr2=0;ctr2<c;ctr2++){
            cout<<martix[ctr1][ctr2]<<" ";
        }
        cout<<endl;
    }
}
