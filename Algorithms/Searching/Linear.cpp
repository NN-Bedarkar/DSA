#include <iostream>
using namespace std;

// Linear search on sorted array (iterative)
int iLsearch(int a[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (x <= a[i]) {
            break;
        }
    }

    if (i == n || x < a[i]) {
        cout << "Not found" << endl;
        return -1;
    } else {
        cout << "Found at index " << i << endl;
        return i;
    }
}

// Linear search on sorted array (Recursive)
int rLsearch(int a[],int n, int i, int x ){
    if(a[i]==x)
       return i;
    else if(i==n || x<a[i])
        return -1;
    else
        return rLsearch(a,n,i+1,x);
}

// Linear search on unsorted array (iterative)
int uiLsearch(int a[],int x, int n){
    for(int i=0;i<=n-1;i++){
        if(x==a[i]){
            return i;
            
        }
    }
    return -1;
}
// Linear search on unsorted array (Recursive)
int urLsearch(int a[],int n, int i, int x){
    if(a[i]==x){
        return i;
    }
    else if(i==n){
        return -1;
    }
    else{
        return urLsearch(a,n,i+1,x);
    }
    
}

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int a2[]={6,7,3,4,9,8,1,2,6,4,7};
    int n = sizeof(a) / sizeof(a[0]);

    // iLsearch(a, n, 6);
    
    // int ans= rLsearch(a, n,0, 6);
    //  cout<<ans;

    // int ans = uiLsearch(a2, 6, n);
    // cout<<ans;

    int ans = urLsearch(a2, n,0, 6);
    cout<<ans;
    return 0;
}
