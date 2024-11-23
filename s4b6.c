#include <stdio.h>
int main(){
    int dauThang, cuoiThang, tieuThu;
    printf("nhap chi so cong to dien dau thang: ");
    scanf("%d",&dauThang);
    printf("nhap chi so cong to dien cuoi thang : ");
    scanf("%d",&cuoiThang);
    tieuThu=cuoiThang-dauThang;
    if(tieuThu>=0 && tieuThu<=200 )
        if(tieuThu<50)
            printf("gia dien la 10,000 VND");
        else if(tieuThu<100)
                printf("gia dien la 15,000 VND");
            else if(tieuThu<150)
                    printf("gia dien la 20,000 VND");
                else if(tieuThu<200)
                        printf("gia dien la 25,000 VND");
                    else 
                        printf("gia dien la 30,000 VND");
    else
        printf("invalid");
    return 0;
}
