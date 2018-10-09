#include <stdio.h>

int main()
{
   int reg_no, bed, contact, service_tax,i,j;
   float amt;
   char n[20];
   
   FILE *fptr;
   fptr=fopen("file1.txt","w");
   
					   printf("Enter the name of the patient: ");
					   scanf("%s",n);
					   
					   printf("Enter the Registration number: ");
					   scanf("%d", &reg_no);
					   
					   printf("Enter the bed number: ");
					   scanf("%d", &bed);
					   
					   printf("Enter the contact number: ");
					   scanf("%d", &contact);
					   
					   printf("Enter the amount: ");
					   scanf("%f", &amt);
					   
   fprintf(fptr,"\nName of the patient: -%s",n);
   fprintf(fptr,"\nRegistration number: -%d",reg_no);
   fprintf(fptr,"\nBed number: -%d",bed);   
   fprintf(fptr,"\nContact Number: -%d",contact);
   
   
   
   fprintf(fptr,"\nAmount: -%f",amt);
   	if (amt >= 10000)
   		{
   			service_tax = 320 + ((amt - 180) * 20)/100;
   			fprintf(fptr,"Above 10000");
		}
	else if (amt >= 50000) 
			{
				service_tax= 920 + ((amt - 180) * 30)/100;
				fprintf(fptr,"Above 50000");
			}
   			else
   				{
   				service_tax = 0;
				fprintf(fptr,"No discount");
				}
				
   fclose(fptr);
   return 0;
}
