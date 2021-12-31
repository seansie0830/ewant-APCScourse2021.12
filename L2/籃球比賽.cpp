// AC (2ms, 340KB)
#include<iostream>
using namespace std;
int main (){
    int points[4][4],i,j,firstA=0,firstB=0,secondA=0,secondB=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin>>points[i][j];
        }
    }
    for(i=0;i<4;i++) firstA+=points[0][i];
    for(i=0;i<4;i++) firstB+=points[1][i];
    for(i=0;i<4;i++) secondA+=points[2][i];
    for(i=0;i<4;i++) secondB+=points[3][i];
    cout<<firstA<<":"<<firstB<<endl<<secondA<<":"<<secondB<<endl;
    if(firstA>firstB&&secondA>secondB)cout<<"Win";
    else if((firstA<firstB&&secondA>secondB)||(firstA>firstB&&secondA<secondB)) cout<<"Tie";
    else cout<<"Lose";
    return 0;
}
