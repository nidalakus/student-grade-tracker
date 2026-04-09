#include<stdio.h>

int main() {
	
	int stcount, sbcount;
	
	printf("Enter the number of student:");
	scanf("%d", &stcount);
	
	printf("Enter the number of subject:");
	scanf("%d", &sbcount);
	
	int grades[stcount][sbcount];
	int i,j;
	
	printf("Enter students grades:");
	
	
	for(i = 0 ; i<stcount ; i++){
		for(j = 0 ; j<sbcount ; j++){
    	scanf("%d", &grades[i][j]);	
		
		}
	}
	
	printf("Grades:\n");
	
	for(i = 0 ; i<stcount ; i++){
		for(j = 0 ; j<sbcount ; j++){
			printf("%d ", grades[i][j]);
				
		}
		printf("\n");
		
	}
	
	int sum = 0;
	float avg;
	
	for(i = 0 ; i<stcount ; i++){
		printf("Student %d total sum:", i + 1);
		for(j = 0 ; j<sbcount ; j++){
			sum += grades[i][j];
			}
			printf("%d\n", sum);
		    
		    avg = (float) sum / sbcount;
		    printf("Student %d avarage is:%.2f\n", i + 1 , avg);
		    
		    sum = 0;
		    avg = 0.0;
	}
	
	printf("\n--- Highest Grades per Subject ---\n");
    for (int j = 0; j < sbcount; j++) {
        int max = grades[0][j];
        for (int i = 1; i < stcount; i++) {
            if (grades[i][j] > max) {
                max = grades[i][j];
            }
        }
        printf("Subject %d - Highest grade: %d\n", j + 1, max);
    }
	
	
	
	return 0;
	
}
