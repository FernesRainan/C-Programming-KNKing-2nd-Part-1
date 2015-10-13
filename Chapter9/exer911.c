//Write the following function//
//float compute_GPA(char grades[], int n);//
//A = 4, B = 3, C = 2, D = 1, F = 0//

float compute_GPA(char grades[], int n)
{
	int total, i;
	char grade;
	
	for (i = 0; i < n; i++){
		grade = grades[i];
		
		switch (grade) {
			case 'A': case 'a':
				total += 4;
				break;
			case 'B': case 'b':
				total += 3;
				break;
			case 'C': case 'c':
				total += 2;
				break;
			case 'D': case 'd':
				total += 1;
				break;
			case 'F': case 'f':
				break;
			default:
				printf("Invalid grade..\n");
				return 0;
		}
	}
	
	return (float) total / (float) n;
}
	
			
