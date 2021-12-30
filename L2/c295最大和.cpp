// zerojudge 	AC (2ms, 324KB)
#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int m,n,i,divide,j,factors=0;
    bool isfactor=false;
    long long sigma=0;
    cin >> n >> m ;
    // * 不要編輸入邊運算!!
    int line[n][m],lineMax[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>line[i][j];
        }
    }
    for(i=0;i<n;i++){
        //lineMax=0;
        for(j=0;j<m;j++){
            lineMax[i]=max(lineMax[i],line[i][j]);
        }
        sigma=sigma+lineMax[i];
    }
    ///////////////////////////////////////////
    // ? 第一部份完成，但第二部份沒有。
    cout<<sigma<<endl;
    for( i=0;i<n;i++){
        if(sigma%lineMax[i]==0){
            if(factors!=0) cout<<" ";
            cout<<lineMax[i];
            isfactor=true;
            factors++;
        }
    }
    if(isfactor==false) cout<<"-1"<<endl;
    return 0;
}
