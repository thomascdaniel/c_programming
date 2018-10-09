#include<stdio.h>
#include<conio.h>

int main()
	{
		
	char patient[50];
	int age, amt, req, discount, condition, pat1=10, pat2=20, pat, med_amt;
	printf("****************WELCOME TO CHRIST HOSPITAL MANAGEMENT SYSTEM*****************");
	printf("\n");
	printf("Enter the requirement: \n");		
		printf("1. Enter the Patient's Name in ICU:\n ");
		printf("2. Enter the Patient number in Emergency ward:\n");
		printf("3. Enter the medicine amount\n");
		
	scanf("%d", &req);
	
	switch(req)
		{
		
			case 1:
				printf("Enter the Patient's Name in ICU: ");
				scanf("%s", patient);
				printf("Patient Name=%s\n", patient);
				
	
				
				printf("if patients condition is: ", condition);
				
				scanf("%d", &condition);
				
				switch (condition)
					{
						case 1:
							printf("Condition is not good\n");
							break;
						
						case 2:
							printf("Condition is stable\n");
							break;
						
						case 3:
							printf("Critical Condition\n");
							break;
							
					default:
						printf("Patient Expired\n");
						break;
					}
					
				printf("Amount to be paid=");
				scanf("%d", &amt);
				printf("Amount paid is :%d", amt);
				break;
				
			case 2: 
				printf("Enter the Patient number in Emergency ward:");
				scanf("%d", &pat); 
					if (pat1>pat2)
						{
							printf("Move Patients to the ward");
						}
					else
						{
							printf("Emergency Room is out of control");
						}	
				break;
				
			case 3:
				printf("Enter the medicine amount");
				scanf("%d",&med_amt);
				
				printf("Enter the amount:");
				scanf("%d", &amt);
				
				printf("Amount Details=%d\n", amt);
				if(amt>10000)
					
					{
						discount=1000;
						
						printf("Discount= %d\n",discount);	
						printf("Amount=%d", amt-discount);
					}
					
						
				else
					{
						printf("No discount");
					}
							
				break;
				
			default:            
			    printf("Not Entered anything");
                break;
		}
			
		
	}
