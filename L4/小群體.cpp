// 內有debug 痕跡
// 預計使用標準版上zerojudge 重測
#include<iostream>
//#include<cstdlib>
using namespace std;
int main(){
    int n,i,no=1,first,track;
    cin>>n;
    int belongs[n]={0},friends[n];
    for(i=0;i<n;i++) cin>>friends[i];
    for(i=0;i<n;i++){
        //cout<<"²Ä"<<i+1<<"¦¸·j´M"<<endl;
        //system("pause");
        first=i;
        if(belongs[i]==0){
                track=friends[i];
            while(true){
                //cout<<"track"<<track<<endl;
                //cout<<"first"<<first<<endl;
                //system("pause");
                if(track==first) {
                    belongs[i]=no;
                    no++;
                    //cout<<"no="<<no<<endl;
                    break;
            }
                else {
                        //cout<<"continue"<<track<<endl;
                        belongs[track]=no;
                        //system("pause");

                }
                track=friends[track];
            }
        }


    }
    cout<<no-1<<endl;
    return 0;
}
