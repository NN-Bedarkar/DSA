#include<iostream>
using namespace std;

int max_dig(int a[],int size){
    int m=0;
  for(int i=0;i<size;i++){
    if(a[i]>m){
        m=a[i];
    }
  }
  int r,q=m,digits=0;
  while(q>0){
       r=q%10;
       q/=10;
       digits++;
       
  }

  return digits;
}

int radix(int a[],int size){
     int digits=max_dig(a,size);
     for(int i=1;i<=digits;i++){
        
     }
     
}

int main(){
    int a[]={3215,765,876,443,543,43};
    radix(a,6);
    return 0;
}