//bubble sort -c 
#include<iostream>
using namespace std;
void bsort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

//improvised bubble sort
void ibsort(int arr[],int size){
    int swapped=1;
    for(int i=0;i<size-1 && swapped;i++){
        int swapped=0;
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                swapped=1;
            }
        }
    }
}
int main(){
    int a[]={1,5,4,6,2,3};
    ibsort(a,6);
    for(int i=0;i<6;i++){
        cout<<a[i];
    }
    return 0;
}