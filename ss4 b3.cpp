#include<stdio.h>
  int main (){
  	int integer;
	
	
	
	printf ("hay nhap so tu nhien:");
	scanf ("%d",&integer );
	
	if (integer % 3 == 0 && integer % 5 == 0 ) {
		printf ("so chia het cho 3 va 5");
    
	}else if (integer % 3 == 0  ) {
	    printf ("so chia het cho 3 ");	
	
	} else if ( integer % 5 == 0) {
		printf ("so chia het cho 5"); 
		}else{
}
    return 0;

}


