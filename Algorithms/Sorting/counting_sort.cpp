#include<iostream>
using namespace std;
int max(int a[],int size){
    int m=0;
    for(int i=0;i<size;i++){
        if(m<a[i]){
            m=a[i];
        }
    }
    return m;
}

void csort(int a[],int size){
     int m=max(a,size);
     int b[size],count[m+1];
     for(int i=0;i<=m;i++){
         count[i]=0;
     }
     for(int i=0;i<size;i++){
         count[a[i]] += 1;
     }
     for(int i=1;i<=m;i++){
         count[i]+=count[i-1];
     }
     for(int i=size-1;i>=0;i--){
        b[--count[a[i]]]=a[i];
     }
     for(int i=0;i<size;i++){
         cout<<b[i]<<" ";
     }
}

int main(){
    int a[]={1,5,4,7,6,8,9,6};
    csort(a,8);
    return 0;
}