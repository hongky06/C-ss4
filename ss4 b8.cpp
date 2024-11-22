#include<stdio.h>
int main(){
	
	int cach_a,cach_b,cach_c;

	printf("hay nhap do dai cua canh a ");
	scanf("%d",&cach_a);
    
	printf("hay nhap do dai cua canh b ");
    scanf("%d",&cach_b);

	printf("hay nhap do dai cua canh c ");
    scanf("%d",&cach_b);
   
   
    if(cach_a + cach_c > cach_b && cach_a + cach_b > cach_c && cach_b + cach_c > cach_a){
    	printf("co the tao than 1 tam giac");
	}else{
		printf("khong the tao thanh 1 tam giac");
	}
	
	
	return 0;
}
