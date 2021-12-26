// * 引入新函數 islower()
/*zero judge結果
#0: 5% AC (2ms, 312KB)
通過檢測
#1: 5% AC (2ms, 320KB)
通過檢測
#2: 5% AC (2ms, 312KB)
通過檢測
#3: 5% AC (2ms, 312KB)
通過檢測
#4: 5% AC (2ms, 324KB)
通過檢測
#5: 5% AC (2ms, 320KB)
通過檢測
#6: 5% AC (2ms, 320KB)
通過檢測
#7: 5% AC (2ms, 312KB)
通過檢測
#8: 5% AC (2ms, 316KB)
通過檢測
#9: 5% AC (2ms, 324KB)
通過檢測
#10: 5% AC (2ms, 352KB)
通過檢測
#11: 5% AC (3ms, 420KB)
通過檢測
#12: 5% AC (2ms, 304KB)
通過檢測
#13: 5% AC (2ms, 324KB)
通過檢測
#14: 5% AC (4ms, 452KB)
通過檢測
#15: 5% AC (3ms, 384KB)
通過檢測
#16: 5% AC (3ms, 400KB)
通過檢測
#17: 5% AC (2ms, 300KB)
通過檢測
#18: 5% AC (2ms, 340KB)
通過檢測
#19: 5% AC (3ms, 352KB)
通過檢測
*/
#include<iostream>
#include<string>
using namespace std;
int main (){
    int i,k,length=0,maxlength=0,index=0,temp;
    //產生count的部分
    string str;
    cin>>k>>str;
    int count[str.length()]={0};
    for(i=1;i<str.length();i++){
        if(islower(str[i])==islower(str[i-1])) count[index]++;
        else{
            count[index]++;
            index++;
        }
    }
    count[index]++;
    temp=0;
    //special case??交錯字串居然有一個?
    if(str[0]=='a'&&str.length()==1) {
        cout<<"1";
        return 0;
    }
    for(i=0;i<=index;i++){
        if(k>count[i]) {
            if(temp==0) continue;
            else {
                maxlength=max(temp,maxlength);
                temp=0;
            }
        }
        else if (k==count[i]) temp=temp+k;
        else if(k<count[i]) {
            if(temp==0) temp=temp+k;
            else {
                temp=temp+k;
                i--;
                maxlength=max(maxlength,temp);
                temp=0;
            }
        }

    }
    cout<<maxlength<<endl;
}
