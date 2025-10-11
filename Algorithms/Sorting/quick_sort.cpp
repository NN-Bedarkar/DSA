
//also work on tail recursive and iterative method.
#include<iostream>
#include<vector>
using namespace std;

//finding the exact and fixed position of pivot and returning the index number of it.
int quick(vector<int> &a,int lwb,int upb){
int pivot=a[lwb];
int i=lwb+1,j=upb;
while(i<=j){
    while (i <= upb && a[i] <= pivot) i++;
        while (j >= lwb && a[j] > pivot) j--;

        if (i < j) {
            swap(a[i], a[j]);

}}
swap(a[lwb],a[j]);
return j;//index number of pivote's fixed position.
}

void sort(vector<int> &a,int lwb, int upb){
     int z;
     if(lwb<upb){
        z=quick(a,lwb,upb);
        sort(a,lwb,z-1);
        sort(a,z+1,upb);
     }
}

int main(){
    vector<int> a={10,11,7,69,63,4,31};
    for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
    }
    
    sort(a,0,a.size()-1);
    cout<<endl;
    for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
    }
    return 0;
}