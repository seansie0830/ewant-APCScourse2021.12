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
�q�L�˴�
#1: 5% AC (2ms, 328KB)
�q�L�˴�
#2: 5% AC (2ms, 324KB)
�q�L�˴�
#3: 5% AC (2ms, 312KB)
�q�L�˴�
#4: 5% AC (2ms, 320KB)
�q�L�˴�
#5: 5% AC (2ms, 320KB)
�q�L�˴�
#6: 5% AC (2ms, 324KB)
�q�L�˴�
#7: 5% AC (2ms, 308KB)
�q�L�˴�
#8: 5% AC (2ms, 316KB)
�q�L�˴�
#9: 5% AC (2ms, 300KB)
�q�L�˴�
#10: 5% AC (2ms, 284KB)
�q�L�˴�
#11: 5% AC (2ms, 312KB)
�q�L�˴�
#12: 5% AC (2ms, 308KB)
�q�L�˴�
#13: 5% AC (2ms, 304KB)
�q�L�˴�
#14: 5% AC (2ms, 300KB)
�q�L�˴�
#15: 5% AC (2ms, 312KB)
�q�L�˴�
#16: 5% AC (2ms, 324KB)
�q�L�˴�
#17: 5% AC (2ms, 308KB)
�q�L�˴�
#18: 5% AC (2ms, 328KB)
�q�L�˴�
#19: 5% AC (2ms, 308KB)
�q�L�˴�
*/
