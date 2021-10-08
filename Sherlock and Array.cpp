#include <iostream>
#define MAX 100000
using namespace std;

int main() {
    int test;
    cin>>test;
    int n, i, t, arr[n], sum;

    while(test--){
        for(i=0; i<=MAX; i++){
            arr[i]=0;
        }
        cin>>n;
        for(i=0; i<n; i++){
            cin>>t;
            sum+=t;
            arr[i]=sum;
            t=0;
        }
        if(n==1){
            cout<<"YES"<<endl;
            sum=0;
            continue;
        }
        for(i=1; i<n; i++){
            if(arr[i-1]==(arr[n-1]-arr[i])){
                cout<<"YES"<<endl;
                break;
            }
            else
                continue;
        }
        if(i==n)
            cout<<"NO"<<endl;
        sum=0;
    }
    return 0;
}
