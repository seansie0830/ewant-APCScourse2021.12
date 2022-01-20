//重複搜尋太多次(未排序)
#include<iostream>
#include<algorithm>
using namespace std;
int pairs(int,int,int*);
int main(){
    int a,i,pairAns;
    cin >> a;
    int list[a];
    for(int i=0; i<a; i++){
        cin >> list[i];
    }
    pairAns=pairs(0,a-1,list);
    cout<<pairAns<<endl;
    return 0;
}
int pairs(int front,int back,int *ref){
    if(back-front==1){
        if(*(ref+front)>*(ref+back)) return 1;
        else return 0;
    }
    if(back==front) return 0;
    int mid=front+back;
    int p,q,tempPairs=0;
    if(mid%2==0)mid=mid/2;
    else mid=mid/2;
    for(p=front; p<=mid;p++){
        for(q=mid+1; q<=back;q++){
            if(*(ref+p)>*(ref+q)){
                tempPairs++;
            }
        }
    }
    return pairs(front,mid,ref)+pairs(mid+1,back,ref)+tempPairs;
}
