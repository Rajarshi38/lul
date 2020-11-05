#include<bits/stdc++.h>
using namespace std;
#define N 10000


int d[N], l[N],r[N];



void cal_depth(int a,int depth){
    d[a] = depth;
    if(l[a]>0)
        cal_depth(l[a],depth+1);
    if(r[a]>0)
        cal_depth(r[a],depth+1);
}
void inorder(int a){
    if(l[a]>0)
        inorder(l[a]);
    cout<<a<<" ";
    if(r[a]>0)
        inorder(r[a]);
}



int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>l[i]>>r[i];
    }


    cal_depth(1,1);

    int t,k;
    cin>>t;
    while(t--){
        cin>>k;


    
    for(int i=1;i<=n;i++){
        if(d[i]%k==0){
            swap(l[i],r[i]);
        }
    }

    inorder(1);
    cout<<endl;
    }
    return 0;

    
}