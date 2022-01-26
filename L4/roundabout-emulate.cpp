// 模擬解  效能不佳   #1#2  AC (2ms, 304KB)
//  ? 延伸 二分搜
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n,m,i,j,pos=0,collect;
    cin >> n >> m;
    int room[n],mission[m];
    for(i=0;i<n;i++) cin>>room[i];
    for(i=0;i<m;i++) cin>>mission[i];
    for(i=0;i<m;i++){
        collect=0;
        while(true){
            if(collect+room[pos]>=mission[i]){
                collect=0;
                pos=pos+1;
                pos=pos%n;
                break;
            }
            else{
                collect=collect+room[pos];
                pos++;
                pos=pos%n;
            }
        }
    }
    cout<<pos<<endl;
    cout<<endl;
    return 0;
}