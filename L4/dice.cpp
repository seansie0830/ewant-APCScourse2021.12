// * AC (3ms, 84KB)πππ
#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
    int n,i,m;
    cin>>n>>m;
    int front[n],right[n],top[n],a,b,tempFront,tempRight,tempTop;
    for(i=0;i<n;i++){
        front[i]=4;
        top[i]=1;
        right[i]=2;
        // * εε§εδΈι’ζΈεΌ
    }
    for(i=0;i<m;i++){
        cin>>a>>b;
        if(a>0&&b>0){
            swap(front[a-1],front[b-1]);
            swap(top[a-1],top[b-1]);
            swap(right[a-1],right[b-1]);
            continue;
            // 
        }
        tempRight=right[a-1];
        tempTop=top[a-1];
        tempFront=front[a-1];
        if(b==-1){  // εεζθ½
            front[a-1]=tempTop;
            top[a-1]=7-tempFront;
            // ?θ½ι―ι??
        }
        if(b==-2){  // εε³ζθ½
            right[a-1]=tempTop;
            top[a-1]=7-tempRight;
            // ?θ½ι―ι??
        }
    }
    for(i=0;i<n;i++){
        cout<<top[i]<<" ";
}
}