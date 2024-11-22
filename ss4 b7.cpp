#include<stdio.h>
int main (){

  int year;
  printf("hay nhap nam:");
  scanf("%d",&year);
  if(year % 4 == 0){
  	printf("la nam nhuan duong lich");
  }else{
  	printf("la nam khong nhuan duong lich ");
}

      return 0;
}
