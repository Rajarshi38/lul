#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int r = 0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i==i){
                    r = r + i;
                }
                else{
                    if(n/i==n){
                        r = r + i;
                    }
                    else{
                    r = r + i + n/i;
                    }
                }
            }
        }

        cout<<r<<endl;
        
        

    
    }
}