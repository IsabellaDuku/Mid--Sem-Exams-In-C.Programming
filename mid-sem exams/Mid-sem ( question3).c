#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float temperature;
	char category[40];
	
	printf("Enter body temperature");
	scanf("%f", &temperature);
	if(temperature <35){
		strcpy(category, "low");	
	}
	else if(temperature >= 35 && temperature <=37.5){
		strcpy(category, "Normal");
	}
	else if(temperature >37.5){
		strcpy(category, "High");
	}
	printf("category %s", &category); 
		
	return 0;
}
