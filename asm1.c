#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
int main(){
	int luaChon; 
		printf("\nChào mừng bạn đến với ASM của tôi");
		printf("\nNhập 1: Lựa chọn chức năng Số nguyên");
		printf("\nNhập 2: Lựa chọn chức năng tìm UCLN và BCNN");
		printf("\nNhập 3: Lựa chọn chức năng Tính tiền quán Karaoke");
		printf("\nNhập 4: Lựa chọn chức năng Tính tiền điện");
		printf("\nNhập 0: Thoát chương trình");
		printf("\nMời bạn nhập lựa chọn: ");	scanf("%d",&luaChon);
		switch(luaChon){
            case 1:{
                 {
				printf("Bạn chọn CN1\n");
				float x;
				printf("Mời bạn nhập xố x: "); scanf("%f",&x);
				if (x==(int)x) 	{
					printf("%.0f là số nguyên\n",x);
					for(int i=1; i<=x/2; i++){
						if (i*i==x) {
							printf("%.0f là số chính phương\n",x);
						}
					}
					int xLaSoNT= 1; 
					for (int i = 2; i <=sqrt(x); i++){
						if ((int)x%i==0) xLaSoNT=0; 
					if (xLaSoNT==1){
						printf("%.0f là số nguyên tố\n",x);
					}else printf("%.0f Không phải số NT\n",x);
				}
            }else printf("%.2f là số thực\n",x);
				break;
			}
			}case 2:{
                printf("Bạn chọn CN2\n");
				break;
			}case 3:{
				printf("Bạn chọn CN3\n");
				break;	
			}case 4:{
				printf("Bạn chọn CN4\n");
				break; 
			}case 6:{
                printf("Bạn chọn CN6\n");
				break; 
			}case 8:{
                printf("Bạn chọn CN8\n");
				break; 
			}case 0:{ 
				return 0;
			}default: printf("\nYou chose wrong\n"); break;  
		}
    system("pause"); 
    return 0;
}







