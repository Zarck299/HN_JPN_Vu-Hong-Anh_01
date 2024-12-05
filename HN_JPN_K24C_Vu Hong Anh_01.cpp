#include<stdio.h>
	int main(){
		int n,a,vitri,luachon;
		int array[50];
			do{
			printf("MENU: \n");
			printf("1. Nhap so phan tu va gia tri cho mang: \n");
			printf("2. In ra cac phan tu trong mang\n");
			printf("3. Dem so luong cac so nguyen to co trong mang\n");
			printf("4. Tim gia tri nho thu hai trong mang\n");
			printf("5. Them mot phan tu vào vi tri ngau nhien trong  mang, phan tu moi them vao mang và vi tri them vao phai do nguoi dung nhap vao	\n");
			printf("6. Xoa phan tu tai mot vi tri cu the(Do nguoi dung nhap)\n");
			printf("7. Sap xep mang theo thu tu giam dan\n");
			printf("8. Nhap vao mot phan tu va kiem tra xem phan tu do co ton tai trong mang khong\n");
			printf("9. Xoa toan bo phan tu trung lap va hien thi ra cac so doc nhat\n");
			printf("10. Dao nguoc thu tu cua cac phan tu trong mang\n");
			printf("11. Thoat\n");
			
			printf("Hay chon mot chuc nang de thuc hien: \n");
			scanf("%d", &luachon);
				switch(luachon) {
					case 1:
						printf("Nhap so phan tu cua mang(toi da la 50): \n");
						scanf("%d",n);
						if(n<0){
							printf("ERROR. Vui long nhap lai!!\n");
						}
						else{
							printf("Hay nhap cac gia tri cua mang: %d\n");
							scanf("%d",&a);
						}
					break;						
					case 2:	
					if (n>0){
						printf("Mang : \n");
						for (int i=0;i<n;i++){
							printf("Phan tu thu %d: %d\n");
							scanf("%d", &n,&array[i]);
						}
					}
					break;
					case 3:
						int soNguyento;
						if (n>0){
							for(int i=1;i<n;i++){
								if(array[i]=2){
									printf("%4d",array[i]);
								}
								for(int j=2;j*j<array[i];j++){
									if (array[i]%j!=0){
										printf("%4d",array[i]);
									}
								}
							
							}
							printf("So luong cac so nguyen to trong mang la: %d\n");
						}
					break;
					case 4:
						int min=0,secondMin=0;
						if(n>0){
							int i;
							for(i=0;i<n;i++){
								for(int j=0;j<n-i-1;j++){
									if(array[i]<array[j]){
										array[i]=min;
										
									}
							}
						}
					break;
					case: 5
						if (n>0){
						int addIndex,index;
						printf("Hay nhap vi tri ban muon them phan tu: %d\n");
						scanf("%d",&index);
						printf("Hay nhap phan tu ban muon them: %d\n");
						scanf("%d", &addIndex);
						
						for(i= index;i<n;i++){
							array[i]=array[i-1]
						}
						array[addIndex]=index;
						for(i=index;i<n;i++){
							printf("%4d",addIndex);
						}
					}
					case 6:
					if(n>0)	{
						printf("Hay nhap vi tri ban muon xoa: %d\n");
						scanf("%d", index);
						for(i= index; i< n;i++){
							array[i]=array[i+1];
						}
						for(i=0;i<n-1;i++){
							printf("%4d");
						}
						else{
							printf("Mang rong!!\n");
						}
							printf("\n");	
					}
					case 11:
					printf("Thoat");
					break;
						}
						
				}
				while(luachon!=11)
		}
		return 0;
	}
