#include <stdio.h>
#include <string.h>
int main(){
    char ch[100] ;
    fgets(ch,20,stdin);
    printf("%s",ch);
    return 0;
}
