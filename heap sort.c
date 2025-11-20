#include <stdio.h>

void heapify(int a[], int n, int i){
    int lg=i, l=2*i+1, r=2*i+2;
    if(l<n && a[l]>a[lg]) lg=l;
    if(r<n && a[r]>a[lg]) lg=r;
    if(lg!=i){
        int t=a[i]; a[i]=a[lg]; a[lg]=t;
        heapify(a,n,lg);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=n/2-1;i>=0;i--) heapify(a,n,i);
    for(int i=n-1;i>0;i--){
        int t=a[0]; a[0]=a[i]; a[i]=t;
        heapify(a,i,0);
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
