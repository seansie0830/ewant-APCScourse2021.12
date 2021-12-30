//  AC (2ms, 344KB)
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main (){
    string input;
    int odd=0,even=0,i;
    cin>>input;
    for(i=0;i<input.length();i++){
        if(i%2==1) odd=odd+input[i]-48;
        else if(i%2==0) even=even+input[i]-48;
    }
    cout<<abs(odd-even)<<endl;
    return 0;
}
