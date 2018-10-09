#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

union hospital
{
	char names[10][8],choice,pass,hos_type,name[20],sname[20],stype[20],locat[20],dest[20],member[20];
    int limit,age;
    long int contact,contact_num,count;
};

int main()
{
  	union hospital hos; 
  	int i,n,j,max=1;
    printf("\t\tCHRIST HOSPITAL MANAGEMENT SYSTEM");

    printf("\nEnter the number of patients entered in the emergency room = ");
    scanf("%d", &n);
    printf("\nEnter names of %d patients = ",n );
    for (i=0; i< n; i++)
    {
        scanf("%s", hos.names[i]);
      
    }
 
    printf("\n\t\tNames\n");
    
    for (i=0; i<n; i++)
    {
        printf("\t\t%s\n", hos.names[i]);
    }
	

    printf("\n1. For The Admitting  of the  Pateints :: \n2. For Medicine Enquiry  :: \n");
	printf("\nenter your choice = ");
	scanf("%d",&hos.choice);
    
    switch(hos.choice)
    {
    	case 1 :
    		printf("\nA. For registration of Patient\n");
    		printf("Press A for filling up of the registration form");
    		scanf("%c",&hos.pass);
    		hos.pass = getchar();
    		{
			
    		
    		switch(hos.pass)
    		{
			         case 'A':
			         	
			         	printf("Enter the Pateint name : ");
			            scanf("%s",hos.name);
			            printf("Enter the Pateint Contact number : ");
			            scanf("%ld",&hos.contact);
			            printf("\n\n Pateint name %s\n Contact number : %ld",hos.name,hos.contact);
			}
			            break;
			            
					
			}
			      	    /*default:
			      	    	printf("invalid choice");*/
				
				break;
				
				case 2 :
    		printf("\na. CARDIO MEDICINES :: \nb. AYURVEDICE MEDICINES  :: \n");
    		printf("\nEnter your choice = ");
			scanf("%c",&hos.hos_type);
    		hos.hos_type = getchar();
    		{
			
    		switch(hos.hos_type)
    		{
			         case 'a':
			         	
			         	printf("\nEnter how many patients wants the medicine = ");
			            scanf("%d",&hos.limit);
			            do
			            {
			            	printf("\nEnter the Patient name = ");
			            	scanf("%s",hos.stype);
			            	printf("\nEnter age = ");
			            	scanf("%d",&hos.age);
			            	
			            	printf("\n Patient name = %s\n Age = %d\n\n",hos.stype,hos.age);
			            	max++;
						}	while(max<=hos.limit);
			           		 break;
			            	
						
			         
					 case 'b':
						printf("\nEnter how many patients wants the medicine = ");
			     		scanf("%d",&hos.limit);
			     	//	printf("\t\t\t%d",hos.limit);
			     	int a;
			     	char name[30];
			     	  a=(hos.limit);
						
			     		while(1<=a)
						{
						 	printf("\n\nEnter the Patient name = ");
					        scanf("%s",hos.stype);
					        strcpy(name,hos.stype);
					        
					        printf("\nEnter age = ");
					        scanf("%d",&hos.age);
					        
					        printf("\n\nPatient name = %s\nAge = %d",name,hos.age);
					      	a--;
				    	}
				        break;
					}
				}
				break;
				default :
         		printf("Invalid choice\n" );
         		break;
    		
	}
    
        
	getch();
    return 1;
}

