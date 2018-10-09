#include<stdio.h>
#include<conio.h>


int main()
	{
	 int resgister;
	 char patient[50];
	 short int age;
	 long int bed_no;
	 unsigned int contact;
	 signed blank_bed;
	 int amt;
	 float medicine_amt; 
	 
	 
	 printf("***************WELCOME TO CHRIST HOSPITAL MANAGEMENT SYSTEM*************\n");
	 
	 printf("Enter the name of the Patient:");
	 scanf("%s", patient);
	 
	 printf("Enter the Registration Number of the Patient:");
	 scanf("%d", &resgister);
	 
	 printf("Enter the contact:");
	 scanf("%hu", &contact);
	 
	 printf("Enter the age of the Patient:");
	 scanf("%hi", &age);	
	 
	 printf("Enter the amount:");
	 scanf("%d", &amt);	
	
	 printf("Enter the bed Number:");
	 scanf("%ld", &bed_no);
	 
	 printf("Enter the medicine Amount:");
	 scanf("%f", &medicine_amt);
	 
	 
	printf("\n\n\n\n\n\n\n\n\n");
	
	printf("PATIENT DETAILS\n");
	printf("Patient's Name=%s\n", patient);
	printf("Registration =%d\n", resgister);
	printf("Contact No.=%hu\n", contact);
	printf("Age of the Patient=%hi\n", age);
	printf("Amount Details=%d\n", amt);
	printf("Bed Number=%ld\n", bed_no);
	printf("Medicine Amount=%f\n", medicine_amt);

	printf("\nTHANK YOU\n");
	}
