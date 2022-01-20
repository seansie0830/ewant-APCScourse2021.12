#include<iostream>
using namespace std;
int p,closist=0,config[30];
void getClosist(int[],int,int,int*);
int main (){
    int n,i;
    cin >> n >> p;
    int num[n];
    for(i=0;i<n;i++) cin >> num[i];
}
void getClosist(int tempConfig[30],int sum,int addition,int *refs){
    int i;
    sum=sum+*(refs+addition);
    tempConfig[addition]=1;
    if(sum>p) return ;
    else if(sum==p){
        cout<<p<<endl;
        exit(0);
    }
    else{
        closist=max(sum,closist);
        for(i=0;i<30;i++){
        if(tempConfig[i]==0){
            getClosist(tempConfig[30],sum,i,refs);
        }
    }
    }
}

