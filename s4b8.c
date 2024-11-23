#include <stdio.h>
int main(){
    int a, b, c;
    printf("nhap chieu dai 3 canh : ");
    scanf("%d %d %d",&a, &b, &c);
    if(a<b+c || b<a+c || c<b+a)
        printf("la tam giac");
    else 
        printf("khong phai tam giac");
    return 0;
}