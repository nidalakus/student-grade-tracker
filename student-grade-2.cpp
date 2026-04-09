#include <stdio.h>

int main () {
	
	int stcount, sbcount;
	int i, j;
	
	
	printf("Enter the number of student: ");
	scanf("%d", &stcount);
	printf("Enter the number of subjects: ");
	scanf("%d", &sbcount);
	
	int grades[stcount][sbcount];
	
	printf("\n--- Grades ---\n");
	
	for (i = 0; i < stcount; i++) {
		printf("Enter grades for student %d:\n ", i + 1);
		for (j = 0; j < sbcount; j++) {
			printf(" Grade for subject %d: ", j + 1);
			scanf("%d", &grades[i][j]);
			
		}
		printf("\n");
	}
	
	printf("\n--- Total and Avarage Grades per Student ---\n");
	
	for (i = 0; i < stcount; i++) {
		int total = 0;
		float avg = 0;
		for (j = 0; j < sbcount; j++) {
			total += grades[i][j];
			avg = (float)total / sbcount;
			
		}
		printf("Student %d - Total:%d, Average:%.2f \n", i+1, total, avg);
	}
	
	printf("\n--- Highest Grades per Student ---\n");
	
	for (j = 0; j < sbcount; j++) {
		int max = grades[0][j];
		for (i = 0; i < stcount; i++) {
			if (grades[i][j] > max) {
				max = grades[i][j];
			}
		}
		printf("Subject %d - Highest grades: %d\n", j+1, max);
	}
	
	
	
	return 0;
	
}
