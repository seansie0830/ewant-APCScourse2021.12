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
ͨ�^�z�y
#1: 5% AC (2ms, 328KB)
ͨ�^�z�y
#2: 5% AC (2ms, 324KB)
ͨ�^�z�y
#3: 5% AC (2ms, 312KB)
ͨ�^�z�y
#4: 5% AC (2ms, 320KB)
ͨ�^�z�y
#5: 5% AC (2ms, 320KB)
ͨ�^�z�y
#6: 5% AC (2ms, 324KB)
ͨ�^�z�y
#7: 5% AC (2ms, 308KB)
ͨ�^�z�y
#8: 5% AC (2ms, 316KB)
ͨ�^�z�y
#9: 5% AC (2ms, 300KB)
ͨ�^�z�y
#10: 5% AC (2ms, 284KB)
ͨ�^�z�y
#11: 5% AC (2ms, 312KB)
ͨ�^�z�y
#12: 5% AC (2ms, 308KB)
ͨ�^�z�y
#13: 5% AC (2ms, 304KB)
ͨ�^�z�y
#14: 5% AC (2ms, 300KB)
ͨ�^�z�y
#15: 5% AC (2ms, 312KB)
ͨ�^�z�y
#16: 5% AC (2ms, 324KB)
�q�L�˴�
#17: 5% AC (2ms, 308KB)
�q�L�˴�
#18: 5% AC (2ms, 328KB)
�q�L�˴�
#19: 5% AC (2ms, 308KB)
�q�L�˴�
*/
