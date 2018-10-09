#include <stdio.h>

struct name 
	{
	   int d;
	   float f;
	   char s[30];
	};

int main()
{
   struct name *ptr;	   
   int reg_no, bed, contact, service_tax,i,j;
   printf("Enter n: ");
   scanf("%d",&j);
   ptr=(struct name*)malloc(j*sizeof(struct name));//36*j memory allocate and ptr will indicate to starting of memory
   char n[20];
   float amt;
	   
	   	for(i=0;i<j;++i)
		  {
	       printf("Enter Ward name\t  Ward Number\t Bed Number:\n");
	       scanf("%s%d%f",&(ptr+i)->s,&(ptr+i)->d,&(ptr+i)->f);
	      }
	
	   printf("\tDisplaying Information:\n");
	   for(i=0;i<j;++i)
	       printf("%s\t\t%d\t\t%.2f\n",(ptr+i)->s,(ptr+i)->d,(ptr+i)->f);
	printf("\n\n\n\n");
   
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
