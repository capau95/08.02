#include <stdio.h>
#include <string.h>

int main () {

	int ziffer;
	char* wochentage[7] = {"Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag", "Sonntag"};

	printf("Geben Sie eine Ziffer von 1-7 für Ihren gewünschten Wochentag ein.\n");
	scanf("%d", &ziffer);

	if (ziffer < 8 && ziffer > 0) {

		printf("Ihr Wochentag ist der %s.\n", wochentage[ziffer - 1]);

	}

	else {

		printf("Sie haben eine ungültige Ziffer eingegeben!\n");

	}

	return 0;

} 
