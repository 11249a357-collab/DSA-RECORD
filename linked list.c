#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main() {
    struct Node *head=NULL, *temp, *n;
    int ch,x;
    while(1){
        scanf("%d",&ch);
        if(ch==1){
            scanf("%d",&x);
            n=(struct Node*)malloc(sizeof(struct Node));
            n->data=x;
            n->next=NULL;
            if(head==NULL) head=n;
            else{
                temp=head;
                while(temp->next!=NULL) temp=temp->next;
                temp->next=n;
            }
        } else if(ch==2){
            temp=head;
            while(temp){
                printf("%d ",temp->data);
                temp=temp->next;
            }
        } else break;
    }
}
