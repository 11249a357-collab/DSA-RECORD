#include <stdio.h>

int main() {
    int n, top=-1, x, ch;
    scanf("%d",&n);
    int s[n];
    while(1){
        scanf("%d",&ch);
        if(ch==1){
            scanf("%d",&x);
            if(top<n-1) s[++top]=x;
        } else if(ch==2){
            if(top>=0) printf("%d ",s[top--]);
        } else if(ch==3){
            for(int i=0;i<=top;i++) printf("%d ",s[i]);
        } else break;
    }
}
