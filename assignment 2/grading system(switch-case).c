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
      switch((int)marks/10)
      {
          case 10:
          case 9:
          case 8:
          case 7:
            grade ='A';
            break;
          case 6:
            grade ='B';
            break;
         case 5:
            grade ='C';
            break;
          case 4:
            grade ='D';
            break;
          default:
            grade ='F';
            break;
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
