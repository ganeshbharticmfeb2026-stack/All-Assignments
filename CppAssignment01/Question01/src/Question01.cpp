#include <stdio.h>

void question01()
{
	float mararthi = 65;
			float english = 70;
			float math = 80;
			float science = 90;
			float it =78;

			float totalmarks = mararthi+english+math+science+it;
			float percentage = totalmarks / 5;

			char grade = (percentage >= 75 )? 'A' :
						 (percentage >= 60 )? 'B' :
						 (percentage >= 45 )? 'C' :
						  'f' ;

			 	printf("\n------ Result ------\n");
			    printf("Subject 1: %.2f\n", mararthi);
			    printf("Subject 2: %.2f\n", english);
			    printf("Subject 3: %.2f\n", math);
			    printf("Subject 4: %.2f\n", science);
			    printf("Subject 5: %.2f\n", it);

			    printf("Total      : %.2f\n", totalmarks);
			    printf("Percentage : %.2f%%\n", percentage);
			    printf("Grade : %c\n", grade);
}



int main()
{

	question01();


	return 0;

}
