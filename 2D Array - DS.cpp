#include <iostream>

using namespace std;


int main(){
    int a[6][6],arr;
    for(int arri = 0;arri < 6;arri++){
       for(int arrj = 0;arrj < 6;arrj++){
          cin >> a[arri][arrj];
       }
    }
    int max=-63;
    for( int i=0; i<4; i++){
        for( int j=0; j<4; j++){
            arr=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(arr>max)
                max=arr;
        }
    }
    cout<<max;
    return 0;
}
