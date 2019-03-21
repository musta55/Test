#include <stdio.h>
#include <string.h>

struct profile {
   char  name[50];
   char  address[100];
   char  roll[100];
   char  reg_number[20];
}student;
int main( ) {
	FILE *fptr;
	int i;
	fptr=fopen("BSSE11.txt","a+");
   printf("Student name :");
   scanf("%s",student.name);
    printf("Student address :");
   scanf("%s",student.address);
    printf("Student roll :");
   scanf("%s",student.roll);
    printf("Student reg_number :");
   scanf("%s",student.reg_number);

    fprintf(fptr, "Student Name : %s\n", student.name);
   fprintf(fptr, "Student address : %s\n", student.address);
   fprintf( fptr,"Student ROLL NO : %s\n", student.roll);
	fprintf( fptr,"Student Registration NO : %s\n\n\n", student.reg_number);
   //printprofile( student1 );
printf("\n\n\n");

	fclose(fptr);
   return 0;
}

