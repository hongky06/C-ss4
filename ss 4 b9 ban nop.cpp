#include<stdio.h>
int main(){
	
	
	int date,month,year;
	printf("nhap ngay: ");
    scanf("%d",&date);
    printf("nhap thang: ");
    scanf("%d",&month);
	printf("nhap nam: "); 	
	scanf("%d",&year);
	
	
	
if (year %4 == 0){       //if
	switch(month){
		 case  1:
	  	if (date <= 31 && date > 0 ){
		  printf("hop le thang 1");
		  printf("nam nay la nam nhuan "); 
		}
	      break;
	  case 2:
	  	if (date <= 29 && date > 0 ){
	  	printf("hop le thang 2");
	  	printf("nam nay la nam nhuan "); 
		  }
	      break;
	   case 3:
	  	if (date <= 31 && date > 0 ){
	  	printf("hop le thang 3 ");
	  	printf("nam nay la nam nhuan "); 
		  }
	      break;
	     case 4:
	  	if (date <= 30 && date > 0 ){
	  	printf("hop le thang 4");	
	  	printf("nam nay la nam nhuan "); 
		  }
	      break;
	  
	     case 5:
	  	if (date < 31 && date > 0 ){
	  	printf("hop le thang 5 ");
	  	printf("nam nay la nam nhuan "); 
		  }
	      break;
	  
	     case 6:
	  	if (date < 30 && date > 0 ){
	  	printf("hop le thang 6");
	  	printf("nam nay la nam nhuan "); 
		  }
	      break;
	     case 7:
	  	if (date < 31 && date > 0 ){
	  	printf("hop le thang 7 ");
	    printf("nam nay la nam nhuan "); 
		  }
	      break;
	  
	     case 8:
	  	if (date < 31 && date > 0 ){
	  	printf("hop le thang 8 ");
		printf("nam nay la nam nhuan ");   
		  }
	      break;
	  
	     case 9:
	  	if (date < 30 && date > 0 ){
	  	printf("hop le thang 9");
	  	printf("nam nay la nam nhuan "); 
		  }
	      break;
	  
	     case 10:
	  	if (date < 31 && date > 0 ){
	  	printf("hop le thang 10");
	  	printf("nam nay la nam nhuan "); 
		  }
	      break;
	  
	     case 11:
	  	if (date < 30 && date > 0 ){
	  	printf("hop le thang 11");
	  	printf("nam nay la nam nhuan "); 
		  }
	      break;
	     case 12:
	  	if (date < 31 && date > 0 ){
	  	printf("hop le thang 12");
	  	printf("nam nay la nam nhuan "); 
		  }
	      break;
	     
	     default ;	  
	    printf("khong hop le");
		printf("moi nhap lai");
	}
          

}/else {              //ket thuc if , bat dau lenh else    
	witch(month){
		 case  1:
	  	if (date <= 31 && date > 0 ){
		  printf("hop le thang 1");
		  printf("nam nay la nam ko nhuan "); 
		}
	      break;
	  case 2:
	  	if (date <= 28 && date > 0 ){
	  	printf("hop le thang 2");
	  	printf("nam nay la nam ko nhuan "); 
		  }
	      break;
	   case 3:
	  	if (date <= 31 && date > 0 ){
	  	printf("hop le thang 3 ");
	  	printf("nam nay la nam ko nhuan "); 
		  }
	      break;
	     case 4:
	  	if (date <= 30 && date > 0 ){
	  	printf("hop le thang 4");	
	  	printf("nam nay la nam ko nhuan "); 
		  }
	      break;
	  
	     case 5:
	  	if (date < 31 && date > 0 ){
	  	printf("hop le thang 5 ");
	  	printf("nam nay la nam ko nhuan "); 
		  }
	      break;
	  
	     case 6:
	  	if (date < 30 && date > 0 ){
	  	printf("hop le thang 6");
	  	printf("nam nay la nam ko nhuan "); 
		  }
	      break;
	     case 7:
	  	if (date < 31 && date > 0 ){
	  	printf("hop le thang 7 ");
	    printf("nam nay la nam ko nhuan "); 
		  }
	      break;
	  
	     case 8:
	  	if (date < 31 && date > 0 ){
	  	printf("hop le thang 8 ");
		printf("nam nay la nam ko nhuan ");   
		  }
	      break;
	  
	     case 9:
	  	if (date < 30 && date > 0 ){
	  	printf("hop le thang 9");
	  	printf("nam nay la nam ko nhuan "); 
		  }
	      break;
	  
	     case 10:
	  	if (date < 31 && date > 0 ){
	  	printf("hop le thang 10");
	  	printf("nam nay la nam ko nhuan "); 
		  }
	      break;
	  
	     case 11:
	  	if (date < 30 && date > 0 ){
	  	printf("hop le thang 11");
	  	printf("nam nay la nam ko nhuan "); 
		  }
	      break;
	     case 12:
	  	if (date < 31 && date > 0 ){
	  	printf("hop le thang 12");
	  	printf("nam nay la nam ko nhuan "); 
		  }
	      break;
	     
	     default ;	  
	    printf("khong hop le");
		printf("moi nhap lai");
	}
        
	
}                       //ket thuc lenh else
  return 0;
}                        //kt ct
