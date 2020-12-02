#include<iostream>
using namespace std;



void print(int* p,int lstindx){
    for(int i=0;i<=lstindx;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

void subsequence_util(int* arr,int n,int idx,int* p,int ci){
    if(idx>=n)
        return;
    p[ci] = arr[idx];
    print(p,ci);
    subsequence_util(arr,n,idx+1,p,ci+1);

    subsequence_util(arr,n,idx+1,p,ci);
}





void subsequence(int *arr,int n){



    int p[n];

    subsequence_util(arr,n,0,p,0);
}




int main(){

    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    subsequence(arr, n);
    
}