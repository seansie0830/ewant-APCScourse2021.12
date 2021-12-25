// * 引入新函數 islower()
#include<iostream>
#include<string>
using namespace std;
int main (){
    int i,k,length=0,maxlength=0,index=0,para;
    //產生count的部分
    string str;
    cin>>str;
    int count[str.length()]={0};
    for(i=1;i<str.length();i++){
        if(islower(str[i])==islower(str[i-1])) count[index]++;
        else{
            count[index]++;
            index++;
        }
    }
    count[index]++;
    // for debug use only
    //for(i=0;i<=index;i++) cout<<count[i]<<" ";
    //for(i=0;i<=index;i++){//index為count裡面資料的真實長度。
    //產生k的部分

    }
