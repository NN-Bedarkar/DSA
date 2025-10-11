//Selection_sort - c
#include<iostream>
using namespace std;
void ssort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int t=i;
        for(int j=i+1;j<size;j++){
            if(arr[t]>arr[j]){
               t=j;
            }
        }
        //swap
        int temp=arr[t];
        arr[t]=arr[i];
        arr[i]=temp;
    }
   
}
int main(){
    int a[]={1,4,3,2,56,7};
    ssort(a,6);
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}