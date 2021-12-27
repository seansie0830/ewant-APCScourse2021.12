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
硄筁浪代
#1: 5% AC (2ms, 328KB)
硄筁浪代
#2: 5% AC (2ms, 324KB)
硄筁浪代
#3: 5% AC (2ms, 312KB)
硄筁浪代
#4: 5% AC (2ms, 320KB)
硄筁浪代
#5: 5% AC (2ms, 320KB)
硄筁浪代
#6: 5% AC (2ms, 324KB)
硄筁浪代
#7: 5% AC (2ms, 308KB)
硄筁浪代
#8: 5% AC (2ms, 316KB)
硄筁浪代
#9: 5% AC (2ms, 300KB)
硄筁浪代
#10: 5% AC (2ms, 284KB)
硄筁浪代
#11: 5% AC (2ms, 312KB)
硄筁浪代
#12: 5% AC (2ms, 308KB)
硄筁浪代
#13: 5% AC (2ms, 304KB)
硄筁浪代
#14: 5% AC (2ms, 300KB)
硄筁浪代
#15: 5% AC (2ms, 312KB)
硄筁浪代
#16: 5% AC (2ms, 324KB)
硄筁浪代
#17: 5% AC (2ms, 308KB)
硄筁浪代
#18: 5% AC (2ms, 328KB)
硄筁浪代
#19: 5% AC (2ms, 308KB)
硄筁浪代
*/
