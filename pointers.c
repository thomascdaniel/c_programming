#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>


int main()
{
	

	int emg_bed, pat_bed, *p, *q, room;
	int resgister;
	char patient[50];
	short int age;
	long int bed_no;
	unsigned int contact;
	char emg_bed_1[50],pat_bed_2[50];

 	printf("***********************CHRIST HOSPITAL MANAGEMENT SYSTEM***********************\n");	 
	printf("\n"); 
 
 	printf("Enter the name of the Patient:");
	scanf("%s", patient);
	printf("\n");
	 
	printf("Enter the Registration Number of the Patient:");
	scanf("%d", &resgister);
	printf("\n");
	 
	printf("Enter the contact:");
	scanf("%hu", &contact);
	printf("\n");
	 
	printf("Enter the age of the Patient:");
	scanf("%hi", &age);	
	printf("\n");
	 
   printf("\t\tBeds available in the Hospital"); 
   printf("\n");
   printf("\n");
   
   p = &emg_bed;
   printf("\t\tEnter the number of patients for the emg_bed: -");
   scanf("%d",&emg_bed);
   printf("\n");  
   printf("\n");
   q = &pat_bed;
   printf("\t\tEnter the number of the patients for the pat_bed: -");
   scanf("%d",&pat_bed);
   
   room=*p+*q;
   room=emg_bed+pat_bed;
   printf("\n Number of patients in both the Rooms = %d\n",room);
 
   int price,choice;
   printf("\n Choose The Room\n 1.emg_bed_1 (Below 2000)\n 2.pat_bed_2 (Above 3000) \n");
   scanf("%d",&choice);
		

	switch(choice)
		{
	case 1:
			if (room<=2000)
				{
						printf("\n");
					printf("\t\tEmergency bed is alotted",choice);
					break;
				}
			else
				{
					printf("\n invalid");
				}
			
	
		case 2:
			if (room>=3000)
				{
						printf("\n");
					printf("Patient bed is alloted",choice);
					break;
				}
			else
				{
					printf("\n invalid");
				}
	
		

		}
		
			printf("\n\n\n\n\n\n\n");
	
	printf("*********************PATIENT DETAILS***********************\n");
	printf("Patient's Name=%s\n", patient);
		printf("\n");
	printf("Registration =%d\n", resgister);
		printf("\n");
	printf("Contact No.=%hu\n", contact);
		printf("\n");
	printf("Age of the Patient=%hi\n", age);
		
		
		
		
	}
