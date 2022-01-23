// tested AC(36ms, 716KB)
#include<iostream>
using namespace std;
int main(){
    int n,i,no=1,first,track;
    cin>>n;
    int belongs[n]={0},friends[n];
    for(i=0;i<n;i++) cin>>friends[i];
    for(i=0;i<n;i++){
        first=i;
        if(belongs[i]==0){
                track=friends[i];
            while(true){
                if(track==first) {
                    belongs[i]=no;
                    no++;
                    break;
            }
                else {
                        belongs[track]=no;
                }
                track=friends[track];
            }
        }


    }
    cout<<no-1<<endl;
    return 0;
}
