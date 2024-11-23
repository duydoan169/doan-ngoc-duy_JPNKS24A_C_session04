#include <stdio.h>
int main(){
    int thang;
    printf("nhap thang : ");
    scanf("%d",&thang);
    if(thang>12 || thang<1)
        printf("so thang khong hop le");
    else if(thang==11 ||thang==4 ||thang==6 ||thang==9 )
            printf("thang vua nhap co 30 ngay");
        else if( thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12 )
            printf("thang vua nhap co 31 ngay ");
    if(thang==2)
        printf("thang vua nhap co 28-29 ngay");

    return 0;
}