#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	

int random[30],sayi,i,a;
	srand(time(NULL));
	printf("Bir sayi gir: "); scanf("%d",&sayi);
	for(i=0;i<30;i++)
	{
    random[i]=rand()%100 ;
	
	if(sayi==random[i])
	{
	a=1;
	break;
	
	
	
	}
	else{
	a=0;
	}
	
	}
	
	if(a==1)
	{
	printf("Tebrikler Canim");
	}
	
	else{
	printf("Uzgunum Canim");
	}	
	
	
	return 0;
}
