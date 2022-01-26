// tested AC(36ms, 716KB)
// tested AC(45ms 600kb)
// TODO 群組判斷成功 剩下數量
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int n,i;
    bool merged=true,belonged,isRepeated;
    cin >> n;
    int friends[n],belongs[n]={0},track=0,no=1,start,j,noNum=0;
    for( i=0;i<n;i++) cin >> friends[i];
    cout<<endl;
    int searchTab[n];
    // pretask
    for(i=0;i<n;i++){
            if(belongs[friends[i]]==0){
                belongs[i]=no;
                no++;
            }
            else{
                for(j=0;j<n;j++){
                    if(belongs[j]==belongs[i]) {
                        belongs[j]=belongs[friends[i]];
                    }
                }
                belongs[i]=belongs[friends[i]];
                cout<<belongs[i]<<"merged to"<<belongs[friends[i]]<<endl;
                if(merged<1)merged++;
            }
        }
    while(merged){
        merged=false;
        for(i=0;i<n;i++){
            if(belongs[friends[i]]==0){
                belongs[i]=no;
                no++;
            }
            else{
                if(belongs[friends[i]]==belongs[i]){
                    merged=false;
                    continue;
                }
                for(j=0;j<n;j++){
                    if(belongs[j]==belongs[i]) {
                        belongs[j]=belongs[friends[i]];
                    }
                }
                belongs[i]=belongs[friends[i]];
                cout<<belongs[i]<<"merged to"<<belongs[friends[i]]<<endl;
                merged=true;
            }
        }
    }
    
    cout<<endl;
    return 0;
    }

