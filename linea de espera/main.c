/**
* @file main.c
* @brief linea de espera
*/
#include "espera.h"




int main(int argc, char *argv[]) {
	
	/**
	* @todo se ingresan los datos pedisos por el usuario
	*/
	printf("ingrese las horas\n");
	scanf("%d %d",&hras1,&hras2);
	printf("ingrese el numero de clientes\n");
	scanf("%d",&cli);
	printf("ingrese las cajas abiertas\n");
	scanf("%d",&caj);
	/** valores de salidas de clientes*/
	sal=12*caj;
	/** valores de cola de espera*/
	esp=cli-sal;
	/** valores de input*/
	inp=cli;
	/** valores de output*/
	out=sal;
	

	printf("ingrese las horas\n");
	scanf("%d %d",&hras3,&hras4);
	printf("ingrese el numero de clientes\n");
	scanf("%d",&cli1);
	printf("ingrese las cajas abiertas\n");
	scanf("%d",&caj1);
    /** valores de salidas de clientes*/
	sal1=12*caj1;
	/** valores de cola de espera*/
	esp1=esp+cli1-sal1;
	/** valores de input*/
	inp1=inp+cli1;
	/** valores de output*/
	out1=out+sal1;
	

	printf("ingrese las horas\n");
	scanf("%d %d",&hras5,&hras6);
	printf("ingrese el numero de clientes\n");
	scanf("%d",&cli2);
	printf("ingrese las cajas abiertas\n");
	scanf("%d",&caj2);

    /** valores de salidas de clientes*/
	sal2=12*caj2;
	/** valores de cola de espera*/
	esp2=esp1+cli2-sal2;
	/** valores de input*/
	inp2=inp1+cli2;
	/** valores de output*/
	out2=out1+sal2;
	
	
	printf("ingrese las horas\n");
	scanf("%d %d",&hras7,&hras8);
	printf("ingrese el numero de clientes\n");
	scanf("%d",&cli3);
	printf("ingrese las cajas abiertas\n");
	scanf("%d",&caj3);
    /** valores de salidas de clientes*/
	sal3=12*caj3;
	/** valores de cola de espera*/
	esp3=esp2+cli3-sal3;
	/** valores de input*/
	inp3=inp2+cli3;
	/** valores de output*/
	out3=out2+sal3;
	

	printf("ingrese las horas\n");
	scanf("%d %d",&hras9,&hras10);
	printf("ingrese el numero de clientes\n");
	scanf("%d",&cli4);
	printf("ingrese las cajas abiertas\n");
	scanf("%d",&caj4);
	/** valores de salidas de clientes*/
	sal4=12*caj4;
	/** valores de cola de espera*/
	esp4=esp3+cli4-sal4;
	/** valores de input*/
	inp4=inp3+cli4;
	/** valores de output*/
	out4=out3+sal4;
	

	printf("ingrese las horas\n");
	scanf("%d %d",&hras11,&hras12);
	printf("ingrese el numero de clientes\n");
	scanf("%d",&cli5);
	printf("ingrese las cajas abiertas\n");
	scanf("%d",&caj5);
	/** valores de salidas de clientes*/
	sal5=12*caj5;
	/** valores de cola de espera*/
	esp5=esp4+cli5-sal5;
	/** valores de input*/
	inp5=inp4+cli5;
	/** valores de output*/
	out5=out4+sal5;
	
   
	printf("ingrese las horas\n");
	scanf("%d %d",&hras13,&hras14);
	printf("ingrese el numero de clientes\n");
	scanf("%d",&cli6);
	printf("ingrese las cajas abiertas\n");
	scanf("%d",&caj6);
    /** valores de salidas de clientes*/
	sal6=12*caj6;
	/** valores de cola de espera*/
	esp6=esp5+cli6-sal6;
	/** valores de input*/
	inp6=inp5+cli6;
	/** valores de output*/
	out6=out5+sal6;
	

	printf("ingrese las horas\n");
	scanf("%d %d",&hras15,&hras16);
	printf("ingrese el numero de clientes\n");
	scanf("%d",&cli7);
	printf("ingrese las cajas abiertas\n");
	scanf("%d",&caj7);
    /** valores de salidas de clientes*/
	sal7=12*caj7;
	/** valores de cola de espera*/
	esp7=esp6+cli7-sal7;
	/** valores de input*/
	inp7=inp6+cli7;
	/** valores de output*/
	out7=out6+sal7;

/**
* @todo todos los resultados obtenidos
*/
printf("\nHoras                 %d%d   %d%d  %d%d  %d%d  %d%d  %d%d  %d%d  %d%d",hras1,hras2,hras3,hras4,hras5,hras6,hras7,hras8,hras9,hras10,hras11,hras12,hras13,hras14,hras15,hras16);
printf("\nLlegadas de clientes  %d     %d     %d     %d    %d    %d    %d     %d",cli,cli1,cli2,cli3,cli4,cli5,cli6,cli7);
printf("\nNo cajas abiertas      %d      %d      %d      %d     %d     %d      %d      %d",caj,caj1,caj2,caj3,caj4,caj5,caj6,caj7);
printf("\nCapacidad salidas     %d     %d     %d     %d    %d    %d     %d     %d",sal,sal1,sal2,sal3,sal4,sal5,sal6,sal7);
printf("\nSalidas clientes      %d     %d     %d     %d    %d    %d     %d     %d",sal,sal1,sal2,sal3,sal4,sal5,sal6,sal7);
printf("\nCola de espera         %d     %d     %d     %d     %d     %d     %d      %d",esp,esp1,esp2,esp3,esp4,esp5,esp6,esp7);
printf("\nInput                 %d    %d    %d    %d    %d    %d    %d    %d",inp,inp1,inp2,inp3,inp4,inp5,inp6,inp7);
printf("\nOutput                %d     %d    %d    %d    %d    %d    %d    %d",out,out1,out2,out3,out4,out5,out6,out7); 
    

	
	 
/**
* @return 0
*/	
	return 0;

}
	

