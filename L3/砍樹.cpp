// ! already broken abort it
#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
    int delNum=0,maxheight,maxpos,num,i,j,leftdistance,rightdistance;
    bool isdel=true;
    cin>>num>>maxpos;
    int treeheight[num];
    int treepos[num];
    for(i=0;i<num;i++){
        cin>>treepos[i];
    }
    for(i=0;i<num;i++){
        cin>>treeheight[i];
    }
    while(isdel){
        leftdistance=0;
        rightdistance=0;
        isdel=false;
        for(i=0;i<num;i++){
            j=i-1;
            if(treeheight[i]==-1) continue;
            while(1){
                cout<<"\n\n目前處理第"<<i<<"棵"<<endl;
                if(j=-1) {
                    cout<<"抵達左邊界"<<endl;
                    leftdistance=+treepos[0];
                    break;
                }
                if(treeheight[j]==-1){
                    leftdistance=+treepos[j]-treepos[j-1];
                    cout<<"沒有樹繼續搜尋"<<endl;
                    break;
                }
                else{
                    leftdistance=+treepos[i]-treepos[j];
                    if(treeheight[j]>0) break;
                    else{
                        cout<<"左邊沒樹，搜尋第"<<j-1<<"棵樹"<<endl;
                        j--;
                    }
                }
            }
            j=i+1;
            while(1){
                if(j==num){
                    cout<<"抵達右邊界"<<"maxpos="<<maxpos<<"treepos[num-1]="<<treepos[num-1]<<endl;
                    rightdistance=maxpos-treepos[num-1];
                    break;
                }
                if(treeheight[j]==-1){
                    cout<<"沒有樹繼續搜尋"<<endl;
                    rightdistance=+treepos[j+1]-treepos[j];
                    break;
                }
                else{
                    rightdistance=+treepos[j+1]-treepos[j];
                    if(treeheight[j]>0) break;
                    else{
                        cout<<"右邊沒樹，搜尋第"<<j+1<<"棵樹"<<endl;
                        j++;
                    }
                }
            }
            cout<<"left="<<leftdistance<<"  right="<<rightdistance<<endl;
            if(leftdistance>=treeheight[i]||rightdistance>=treeheight[i]){
                cout<<"移除掉"<<"第"<<i<<"棵在座標"<<treepos[i]<<"高"<<treeheight[i]<<"的樹"<<endl;
                cout<<"delNum="<<delNum<<endl;
                system("pause");
                delNum++;
                isdel=true;
                treeheight[i]=-1;
            }
            else{
                    cout<<"保留"<<"第"<<i<<"棵在座標"<<treepos[i]<<"高"<<treeheight[i]<<"的樹"<<endl;
            }
        }
        cout<<"迴圈底部 isDel="<<isdel<<endl;
    }
    cout<<delNum<<endl;
    cout<<"程式執行完畢"<<endl;
    system("pause");
}
