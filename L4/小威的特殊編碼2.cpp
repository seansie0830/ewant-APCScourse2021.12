// zerojudge 83%  �ѤU�j����
#include<iostream>
using namespace std;
int main (){
    long long n;
    int a,b,c,d,i,key;
    char ans[16];
    ans[5]='A';
    ans[7]='B';
    ans[2]='C';
    ans[13]='D';
    ans[8]='E';
    ans[12]='F';
    while(cin>>n){
        string s[n];
        for(i=0;i<n;i++){
            cin>>a>>b>>c>>d;
            key=8*a+4*b+2*c+d;
            s[i]=ans[key];
    }
    for(i=0;i<n;i++)cout<<s[i];
    cout<<endl;
    }

    return 0;
}
