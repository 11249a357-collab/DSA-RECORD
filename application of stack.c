#include <stdio.h>
#include <string.h>

char stack[100];
int top=-1;

int main() {
    char s[100];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[') stack[++top]=s[i];
        else{
            if(top==-1){ printf("Invalid"); return 0; }
            char t=stack[top--];
            if((s[i]==')'&&t!='(')||(s[i]=='}'&&t!='{')||(s[i]==']'&&t!='[')){
                printf("Invalid");
                return 0;
            }
        }
    }
    if(top==-1) printf("Valid");
    else printf("Invalid");
}
