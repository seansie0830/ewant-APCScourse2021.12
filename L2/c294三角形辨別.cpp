#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int length[3];
    cin>>length[0]>>length[1]>>length[2];
    sort(length,length+3);
    cout<<length[0]<<" "<<length[1]<<" "<<length[2]<<endl;
    if(length[0]+length[1]<length[2]) cout<<"No";
    else if(length[2]*length[2]>length[1]*length[1]+length[0]*length[0]) cout<<"Obtuse";
    else if(length[2]*length[2]==length[1]*length[1]+length[0]*length[0]) cout<<"Right";
    else if(length[2]*length[2]<length[1]*length[1]+length[0]*length[0]) cout<<"Acute";
    return 0;
}
/*
#0: 5% AC (2ms, 324KB)
通過檢測
#1: 5% AC (2ms, 328KB)
通過檢測
#2: 5% AC (2ms, 324KB)
通過檢測
#3: 5% AC (2ms, 312KB)
通過檢測
#4: 5% AC (2ms, 320KB)
通過檢測
#5: 5% AC (2ms, 320KB)
通過檢測
#6: 5% AC (2ms, 324KB)
通過檢測
#7: 5% AC (2ms, 308KB)
通過檢測
#8: 5% AC (2ms, 316KB)
通過檢測
#9: 5% AC (2ms, 300KB)
通過檢測
#10: 5% AC (2ms, 284KB)
通過檢測
#11: 5% AC (2ms, 312KB)
通過檢測
#12: 5% AC (2ms, 308KB)
通過檢測
#13: 5% AC (2ms, 304KB)
通過檢測
#14: 5% AC (2ms, 300KB)
通過檢測
#15: 5% AC (2ms, 312KB)
通過檢測
#16: 5% AC (2ms, 324KB)
通過檢測
#17: 5% AC (2ms, 308KB)
通過檢測
#18: 5% AC (2ms, 328KB)
通過檢測
#19: 5% AC (2ms, 308KB)
通過檢測
*/
