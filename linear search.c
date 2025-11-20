#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("Found at %d", i);
            return 0;
        }
    }
    printf("Not Found");
}
