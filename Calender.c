#include <stdio.h>

/*
   Addison Chen
   Calender Calculator
*/

int main(int argc, char *argv[]) {
	int m1, m2, d1, d2;
	printf("Please enter the first date");
	printf("\nEnter the month : ");
	scanf("%d", &m1);
	printf("\nEnter the day of month : ");
	scanf("%d", &d1);
	
	if (m1 > 12 || m1 < 1) {
		printf("Wrong format, your month is wrong. Please try again\n");
		return 0;
	}
	if (d1 > 30 || d1 < 1) {
		printf("Wrong format, your day of month is wrong. Please try again\n");
		return 0;
	}
	printf("The date(month/day) you entered is : %d %d", m1, d1);
	printf("\nPlease enter the second date");
	printf("\nEnter the month : ");
	scanf("%d", &m2);
	printf("\nEnter the day of month : ");
	scanf("%d", &d2);
	
	if (m2 > 12 || m2 < 1) {
		printf("Wrong format, your month is wrong. Please try again\n");
		return 0;
	}
	if (d2 > 30 || d2 < 1) {
		printf("Wrong format, your day of month is wrong. Please try again\n");
		return 0;
	
		
	}
	if (m2 < m1) {
	printf("Wrong. You cannot pick this date and day\n");
	return 0;
	}

	printf("The second date you have entered is : %d %d", m2, d2);
	int monthvalue[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	if (d1 > d2) {
		d2 += monthvalue[m2];
		m2--;
			
	}
	d2 = d2 - d1;
	m2 = m2 - m1;
	
	printf("\n%d", m2); //Check for error check

	int totaldays = 0;
	while (m2 > 0) {
		totaldays += monthvalue[m2];
				m2--;//Add the array of months together since not all months are same number of days
	}
printf("number of days = : %d/n", totaldays);
return 0;
			
		
	}
	
	
	
	
	
	
	
