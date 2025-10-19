#include <stdio.h>

int main(){
    int a ,b;
    scanf("%d %d", &a,&b);

    if(a < b){
        printf("a is biger then b");
    }
    else if(a > b){
        printf("b is biger then a");
    }
    else{
        printf("a == b");
    }
    
    return 0;
}
