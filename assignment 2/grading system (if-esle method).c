#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    char grade;
    int reg_no;
    char name[50];
    int students_no;

    //number of students
     printf("Enter number of students:    ");
    scanf("%d",&students_no);

    //credentials
    for (int i=0; i<students_no; i++)
    {
        printf("Enter Registration number:    ");
        scanf("%d",&reg_no);

        printf("Enter student name:    ");
        scanf("%49s",&name);

        printf("Input marks:    ");
        scanf("%d",&marks);

    //grading
        if  (marks>=70)
          {
            grade='A';
          }
            else if (marks>=60 && marks <70)
            {
            grade='B';
            }
            else if (marks>=50 && marks <60)
            {
            grade='C';
            }
            else if (marks>=40 && marks <50)
            {
            grade='D';
            }
            else if (marks< 40)
            {
            grade='F';
            }

    printf("==========STUDENT INFORMATION==========\n");
    printf("REGISTRATION NO.:    %d\n", reg_no);
    printf("NAME            :    %s\n", name);
    printf("MARKS           :    %.2d\n", marks);
    printf("GRADE           :    %c\n", grade);


    if (marks>=40)
    {
        printf("STATUS : PASSED\n");
    }
        else
        {
            printf("STATUS : FAILED\n");
        }
    }
    return 0;
}
