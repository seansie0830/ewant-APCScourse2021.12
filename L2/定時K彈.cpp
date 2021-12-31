// zerojudge NA20% 原因:TLE 需用更有效率的算法。
#include<iostream>
using namespace std;
int main(){
    long long n,m,k,i=0,counter,bomb;
    cin >> n >> m >> k;
    long long player[n]={0}; //0=alive 1=dead
    counter=m;
    bomb=k;
    while(1){
        i++;
        i=i%n;
        if(player[i]==1) continue;
        else{
            counter--;
            if(counter==0){
                bomb--;
                player[i]=1;
                if(bomb==0){
                    break;
                }
                counter=m;
            }
        }
    }
    while(1){
        if(player[i]==0){
            cout<<i<<endl;
            return 0;
        }
        else{
            i++;
            i%=n;
        }
    }
}
