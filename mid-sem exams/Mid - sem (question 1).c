#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float temperature;
	int heartRate;
	int bloodPressure;
	
	printf("Enter your vitals.Start with temperature ");
	scanf("%f", &temperature);
	
	printf("Enter your heartRate ");
	scanf("%d", &heartRate);
	
	printf("Enter your bloodPressure ");
	scanf("%d", &bloodPressure);
	
	printf("Temperature %f\n", temperature);
	
	printf("HeartRate %d\n", heartRate);
	
	printf("BloodPresure %d", bloodPressure);
	
	
	

	return 0;
}
