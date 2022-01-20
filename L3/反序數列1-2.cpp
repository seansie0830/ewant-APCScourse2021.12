// 暴力尋找法 第二慢版本(20% killed)
#include "iostream"
using namespace std;
int main(){
    int a,i,j,pair=0,compairs;
    cin>>a;
    int list[a];
    for(i=0;i<a;i++){
        cin>>list[i];
    }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            compairs++;
            if(i<j&&list[i]>list[j]){
                pair++;
            }
        }
    }
    cout<<pair<<endl;
    cout<<"compairs"<<compairs<<endl;
}
