#include <stdio.h>
int main(){
    int nam;
    printf("nhap so nam : ");
    scanf("%d",&nam);
    if(nam%400==0 || nam%4==0 && nam%100!=0)
        printf("nam nhuan");
    else 
        printf("khong phai nam nhuan");
    return 0;
}