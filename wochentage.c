#include <stdio.h>
#include <string.h>

int main () {

	int ziffer;
	char* wochentage[7];
	wochentage[0] = "Montag";
	wochentage[1] = "Dienstag";
	wochentage[2] = "Mittwoch";
	wochentage[3] = "Donnerstag";
	wochentage[4] = "Freitag";
	wochentage[5] = "Samstag";
	wochentage[6] = "Sonntag";

	printf("Geben Sie eine Ziffer von 1-7 für Ihren gewünschten Wochentag ein.\n");
	scanf("%d", &ziffer);

	if (ziffer < 8) {

		printf("Ihr Wochentag ist der %s.\n", wochentage[ziffer - 1]);

	}

	else {

		printf("Sie haben eine ungültige Ziffer eingegeben!\n");

	}

	return 0;

} 
