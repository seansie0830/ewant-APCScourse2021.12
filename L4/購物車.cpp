// AC (4ms, 336KB)
#include<iostream>
using namespace std;
int main(){
    int a,b,n,i,abuy,bbuy,lists=1,aAndb=0;
    cin>>a>>b>>n;
    for(i=0;i<n;i++){
        lists=1;
        abuy=0;
        bbuy=0;
        while(lists!=0){
            cin>>lists;
            if(lists==a) abuy++;
            if(lists==b) bbuy++;
            if(lists==-a) abuy--;
            if(lists==-b) bbuy--;
        }
        if(abuy>0&&bbuy>0) aAndb++;
    }
    cout<<aAndb<<endl;
    return 0;
}
