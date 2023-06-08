



#include<stdio.h>
#include<string.h>
int main(){
    char s[]="racecar";
    int st=0;
    int en=strlen(s)-1;
    char l[]="racecar";
    while(st<en){
        char temp=s[st];
        s[st]=s[en];
        s[en]=temp;
        st++;
        en--;
    }
    printf("reversed string is %s \n",s);
    st=0;
    int flag=1;
    while(st<strlen(s)){
        if(s[st]!=l[st]){
            flag=0;
            break;
        }
        st++;
    }
    if(flag==1){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}