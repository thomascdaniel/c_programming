#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

char a[50]; 

int main()
	{ 
	 int i, n;	 // auto 
	 
	 register flag=0; 
	 short int age; 
	 static int bed_no=100 ;
	 unsigned int contact;
	 int amt;
	 float medicine_amt; 
	 
	 
	 printf("***************WELCOME TO CHRIST HOSPITAL MANAGEMENT SYSTEM*************\n");
	 
	 printf("\n");
	 
	 
	 printf("\t\t\tDetails of the Patient\n");
	 printf("\n");
	 
	 
	 printf("Enter the contact:");
	 scanf("%hu", &contact);
	 
	 printf("Enter the age of the Patient:");
	 scanf("%hi", &age);	
	 
	 printf("Enter the amount:");
	 scanf("%d", &amt);	
	
	 
	 
	 printf("Enter the medicine Amount:");
	 scanf("%f", &medicine_amt);	

	for(i=1;i<=n;i++)
		{
		do{
		
		printf("\n \nEnter name of the Patient %d \t",i);
		flag=0;	
		scanf(" %s",a);
		flag = validate(a);
			
		if(flag==1)
			printf("INVALID");
		}while(flag==1);
		
		bed_no++;
		printf(" \n \n Enter the Name of the Patient %d = %s",i,a);
		printf("\n \nBed Number is%d is = %d",i, bed_no);
		
		}
			 
	 printf("Enter the contact:");
	 scanf("%hu", &contact);
	 
	 printf("Enter the age of the Patient:");
	 scanf("%hi", &age);	
	 
	 printf("Enter the amount:");
	 scanf("%d", &amt);	
	
	 
	 
	 printf("Enter the medicine Amount:");
	 scanf("%f", &medicine_amt);	
	 
	}
	
int validate(char str[])
{
	int i,flag=0;
	
	for(i=0;str[i]!='\0';i++)
	{
		if(!isalpha(str[i]))
		{
			flag=1;
			break;
		}
	}
	
	return flag;
}	
