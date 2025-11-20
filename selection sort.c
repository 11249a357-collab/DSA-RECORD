#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int m=i;
        for(int j=i+1;j<n;j++) if(a[j]<a[m]) m=j;
        int t=a[i]; a[i]=a[m]; a[m]=t;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
