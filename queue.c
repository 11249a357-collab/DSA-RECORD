#include <stdio.h>

int main() {
    int n, front=-1, rear=-1, ch, x;
    scanf("%d",&n);
    int q[n];
    while(1){
        scanf("%d",&ch);
        if(ch==1){
            scanf("%d",&x);
            if(rear<n-1){
                if(front==-1) front=0;
                q[++rear]=x;
            }
        } else if(ch==2){
            if(front!=-1 && front<=rear) printf("%d ", q[front++]);
        } else if(ch==3){
            for(int i=front;i<=rear;i++) printf("%d ",q[i]);
        } else break;
    }
}
