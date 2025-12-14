#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
void karaoke(int start, int end){
    int cost = 150000, costAfter = 50000;
    int time = end - start;
    if (start < 11 || end > 24 || start >= end)
    {
        printf("Ngoài giờ hoạt động.\n");
    }
    else if(time <= 3) {
        if(start >= 14 && start <= 17){
            cost = cost - (cost*10)/100;
        }
        printf("Số tiền cần thanh toán là %dđ\n", cost);
    }
    else {
        
        time = time - 3;
        cost = cost + costAfter*time;
        
        cost = cost - (cost*30)/100;
        if(start >= 14 && start <= 17){
            cost = cost - (cost*10)/100;
        }
        printf("Số tiền cần thanh toán là %dđ\n", cost);
    } 
}
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
				int a, b;
                printf("Nhập số thứ nhất: ");
                scanf("%d", &a);

                printf("Nhập số thứ hai: ");
                scanf("%d", &b);

                printf("UCLN(%d, %d) = %d\n", a, b, (a, b));
                printf("BCNN(%d, %d) = %d\n", a, b, (a, b));

                break;
				break;
			}case 3:{
				int start,end;
                printf("3: CHƯƠNG TRÌNH TÍNH TIÊN QUÁN KARAOKE.\n");
                printf("Nhập giờ bắt đầu: "); scanf("%d", &start);
                printf("Nhập giờ kết thúc: "); scanf("%d", &end);
                if(start <= 0 || end <= 0) printf("Bạn đã nhập sai.\n");
                else karaoke(start, end);
				break;
			}case 4:{
				printf("Bạn chọn CN4\n");
				 int soDien;
                float donGia;
                printf("Nhập số kWh đã sử dụng: ");
                scanf("%d", &soDien);

                if(soDien <= 50) donGia = 1000;
                else if(soDien <= 100) donGia = 1200;
                else donGia = 1500;

                float tienDien = soDien * donGia;
                printf("Tổng tiền điện: %.0f VND\n", tienDien);
                break;
				break; 
			}case 5:{
                printf("Bạn chọn CN5\n");
				 float tienVay, laiSuat;
                int thang;
                printf("Nhập số tiền vay: ");
                scanf("%f", &tienVay);
                printf("Nhập lãi suất/tháng (%%): ");
                scanf("%f", &laiSuat);
                printf("Nhập số tháng vay: ");
                scanf("%d", &thang);
                float tongTien = tienVay * (1 + laiSuat/100*thang);
                printf("Tổng tiền phải trả: %.2f VND\n", tongTien);
                break;
				break; 
			}case 6:{
                printf("Bạn chọn CN6\n");
				break; 
			}case 0:{ 
				return 0;
			}default: printf("\nYou chose wrong\n"); break;  
		}
    system("pause"); 


    return 0;
}
    







