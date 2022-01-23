#include<iostream>
using namespace std;
int main () {
    int n,k,s,alive=0,i,times;
    cin>>n>>k>>times;
    for (i = n-times+1; i <n; i++)
    {
        alive=(alive+k)%i;
        cout<<alive<<"i="<<i<<endl;
    }
    cout<<alive<<endl;
}
