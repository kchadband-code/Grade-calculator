#include <stdio.h> 

int main() 
{

int s1, s2, s3, s4, per;

printf("Enter your 4 Assignment scores\n");
printf("Assignment, Quiz, Midterm, and Final\n");
scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

per = (s1 + s2 + s3 + s4) / 4.0;

  if (per > 100)

    printf("Invalid score entered. kindly re-enter\n");

else if (per >= 90 && per <= 100)
    printf("%d A- Excellent/Pass\n", per);

else if(per >= 80 && per <= 89)
    printf("%d B- Very Good/Pass\n", per);

else if(per >= 70 && per <= 79)
    printf("%d C- Satisfactory/Pass\n", per);

else if(per >= 60 && per <= 69)
    printf("%d D- Troublesome/Pass\n", per);

else { printf("%d F- Trash/Fail\n", per); }


return 0;

}