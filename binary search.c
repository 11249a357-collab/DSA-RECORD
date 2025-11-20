#include <stdio.h>

int main() {
    int n,key;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==key){
            printf("Found at %d",m);
            return 0;
        } else if(a[m]<key) l=m+1;
        else r=m-1;
    }
    printf("Not Found");
}
