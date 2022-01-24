// zerojudge 83%  ³Ñ¤U¤j´ú¸ê
#include<iostream>
using namespace std;
int main (){
    long long n;
    int a,b,c,d,i;
    while(cin>>n){
        string s[n];
        for(i=0;i<n;i++){
            cin>>a>>b>>c>>d;
            if(a==0&&b==1&&c==0&&d==1) s[i]='A';
            if(a==0&&b==1&&c==1&&d==1) s[i]='B';
            if(a==0&&b==0&&c==1&&d==0) s[i]='C';
            if(a==1&&b==1&&c==0&&d==1) s[i]='D';
            if(a==1&&b==0&&c==0&&d==0) s[i]='E';
            if(a==1&&b==1&&c==0&&d==0) s[i]='F';
    }
    for(i=0;i<n;i++)cout<<s[i];
    cout<<endl;
    }

    return 0;
}
