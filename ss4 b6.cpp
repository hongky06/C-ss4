#include<stdio.h>
int main(){
	float cu,moi,so,monny;
	printf("nhap tien dien dau thang "); 
	scanf("%f",&cu); 
	printf("nhap tien dien cuoi thang "); 
	scanf("%f",&moi);
	so = moi - cu; 
	printf("so dien ban dung la %.1f ",so); 
	if (so <= 50 && so > 0){
		monny = so * 10000;
	
	}else if (so <= 100 && so > 50){
		monny = so * 15000;
	   
	}else if (so <= 150 && so > 100  ){
		monny = so * 20000;
	    
	}else if (so <= 200 && so > 150){
		monny = so * 25000;
	}else if (so > 200){
		monny = so * 30000;
	   
}
	 printf("tien dien cua ban thang nay la %.3f",monny);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
