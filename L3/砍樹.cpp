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
                cout<<"\n\n�ثe�B�z��"<<i<<"��"<<endl;
                if(j=-1) {
                    cout<<"��F�����"<<endl;
                    leftdistance=+treepos[0];
                    break;
                }
                if(treeheight[j]==-1){
                    leftdistance=+treepos[j]-treepos[j-1];
                    cout<<"�S�����~��j�M"<<endl;
                    break;
                }
                else{
                    leftdistance=+treepos[i]-treepos[j];
                    if(treeheight[j]>0) break;
                    else{
                        cout<<"����S��A�j�M��"<<j-1<<"�ʾ�"<<endl;
                        j--;
                    }
                }
            }
            j=i+1;
            while(1){
                if(j==num){
                    cout<<"��F�k���"<<"maxpos="<<maxpos<<"treepos[num-1]="<<treepos[num-1]<<endl;
                    rightdistance=maxpos-treepos[num-1];
                    break;
                }
                if(treeheight[j]==-1){
                    cout<<"�S�����~��j�M"<<endl;
                    rightdistance=+treepos[j+1]-treepos[j];
                    break;
                }
                else{
                    rightdistance=+treepos[j+1]-treepos[j];
                    if(treeheight[j]>0) break;
                    else{
                        cout<<"�k��S��A�j�M��"<<j+1<<"�ʾ�"<<endl;
                        j++;
                    }
                }
            }
            cout<<"left="<<leftdistance<<"  right="<<rightdistance<<endl;
            if(leftdistance>=treeheight[i]||rightdistance>=treeheight[i]){
                cout<<"������"<<"��"<<i<<"�ʦb�y��"<<treepos[i]<<"��"<<treeheight[i]<<"����"<<endl;
                cout<<"delNum="<<delNum<<endl;
                system("pause");
                delNum++;
                isdel=true;
                treeheight[i]=-1;
            }
            else{
                    cout<<"�O�d"<<"��"<<i<<"�ʦb�y��"<<treepos[i]<<"��"<<treeheight[i]<<"����"<<endl;
            }
        }
        cout<<"�j�驳�� isDel="<<isdel<<endl;
    }
    cout<<delNum<<endl;
    cout<<"�{�����槹��"<<endl;
    system("pause");
}
