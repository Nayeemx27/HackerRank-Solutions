#include<iostream>
using namespace std;

 int main(){
   int num,size,arr[1000],i;
   scanf("%d",&num);
   scanf("%d",&size);
   for(i=0;i<size;i++){
     scanf("%d",&arr[i]);
   }
   for(i=0;i<size;i++){
     if(num==arr[i])
       cout<<i;
   }
   return 0;
 }
