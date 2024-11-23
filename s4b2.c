#include <stdio.h>
int main(){
    int number;
    printf("nhap so nguyen : ");
    scanf("%d",&number);
    if(number%2==0)
        printf("so chan");
    else 
        printf("so le");
    return 0;
}