#include<stdio.h>
#include<conio.h>
#include<string.h>

int name_valid(char check[]);
int num_valid(char check[]);

int main()
{
	 
	 
	 char name[20],req, password[20], flag=0;
	 char doctor[20], password_sign[20], age[20], contact[10];
	 
	 
	printf("***********************CHRIST HOSPITAL MANAGEMENT SYSTEM***********************\n");	 
	printf("\n"); 
		 
	printf("\t\t\tLOGIN OR SIGN UP\n");
	printf("\n");
	
	printf("\t\t\t1. LOGIN\n");
	printf("\n");
	
	printf("\t\t\t2. SIGN UP\n");
	printf("\n");
	
	printf("\t\t\t3. EXIT FROM THIS PAGE\n");
	printf("\n");
	
	printf("\t\tENTER THE USER ID AND PASSWORD OTHER SIGN UP: -");
	scanf("%d", &req);
	switch(req)
	{
			
			case 1:
					do
					{	
					flag=0;
					printf("\t\t\t Enter the UserName = ");
					scanf("%s", name);
					printf("\n");
						
						flag=name_valid(name);
						if(flag==1)
						{
							printf("\nINVALID INPUT.\n");
						}
					}while(flag==1);
					 
					do
					{	
					flag=0;
					printf("\t\t\tEnter the password = ");
						scanf("%s",password);
						
						flag=name_alpha(password);
						if(flag==1)
						{
							printf("\nDIGIT PASSWORD.\n");
						}
					}while(flag==1);
						printf("\n");
						printf("\t\t\t\tWELCOME");	
						
					break;
			
			case 2:
					do
					{	
					flag=0;
					printf("\t\t\t Sign up = \n");
				 printf("\t\t\tEnter the name of the Doctor:");
				 scanf("%s", doctor);
					printf("\n");
						
						flag=name_valid(doctor);
						if(flag==1)
						{
							printf("\nINVALID INPUT.\n");
						}
					}while(flag==1);
				
					do
					{	
					flag=0;
					printf("\t\t\tEnter the new password = ");
						scanf("%s",password_sign);
						printf("\n");	
						flag=num_valid(password_sign);
						if(flag==1)
						{
							printf("\nDIGIT PASSWORD.\n");
						}
					}while(flag==1);
			
					do
					{	
					flag=0;
					printf("\t\t\tEnter the age = ");
						scanf("%s",age);
						printf("\n");
						
						flag=num_valid(age);
						if(flag==1)
						{
							printf("\nINVALID AGE.\n");
						}
					}while(flag==1);
					
					do
					{	
					flag=0;
					printf("\t\t\tEnter the Contact No. = ");
						scanf("%s",contact);
						printf("\n");
						
						flag=num_valid(contact);
						if(flag==1)
						{
							printf("\nINVALID Number.\n");
						}
					}while(flag==1);
						
						printf("\n\n\n\n");
						printf("Doctor's Name=%s\n", doctor);
						printf("Password=%s\n", password_sign);
						printf("Age=%s\n", age);
						printf("Contact Number=%s\n", contact);	
						
					break;
				case 3:
					printf("Exit From this page");
					break;
				
					default:
								printf("Enter correct option");
								break;
	}
	 
}


//validation (Number)
	 int num_valid(char check[])
		{
			int i, flag=0;
			for(i=0;check[i]!='\0';i++)
				{
				if(!isdigit(check[i]))
					{
					flag=1;
					break;
					}
				}
			return flag;
		}
//validation (Name)
		int name_valid(char check[])
		{
			int i,flag=0;
			for(i=0;check[i]!='\0';i++)
					{
					if(!isalpha(check[i]))
						{
						flag=1;
						break;
						}			
					}		
			return flag;
		}
//validation (AlphaNumeric)
		int name_alpha(char check[])
		{
			int i,flag=0, num[i];
			for(i=0; num[i]!='\0';i++)
					{
					if ((num[i]>=48&&num[i]<=57)||((num[i]>=65&&num[i]<=91)||(num[i]>=97&&num[i]<123)))
						{
						flag=1;
						break;
						}			
					}		
			return flag;
		}
