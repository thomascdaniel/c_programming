#include<stdio.h>
#include<string.h>
#include<ctype.h>



int medicine(int *y)
{
  int temp;
  printf("\nEnter the new mdecinies =  ");
  scanf("%d",&temp );
  *y =temp;
}2
2


int medicine_1(int x)
{
  int temp_amt,temp_rate;
  printf("\nIn case if you want to check the price of the medicine \n");
  scanf("%d",&x );
  printf("Enter the rate =  ");
  scanf("%d",&temp_rate );
  temp_amt=temp_rate*x;
  printf("The amount will be %d =  ",temp_amt );
}
int main() {
	
schedule();	
}

int schedule()
{

  int ch,amt,qty,rate,validnum,validname, billNo;
  char name[30],no[30], str[50];	
  printf("\t**************CHRIST HOSPITAL MANAGEMENT SYSTEM****************");
  printf("\n \n\t1.Updating of the medicines \n \n\t2. For Viewing the Quantities\n \n \n" );
  printf("\nEnter the choice =  ");
  scanf("%d",&ch );

  switch (ch) {
    case 1:
    	do{
			printf("\nEnter the Medicine Reg. =  "); 
    		scanf("%s",no);
    		validnum=digit(no);
    	}while(validnum!=0);
    	billNo = atoi(no);
    	do	{
			printf("\nEnter the name  of the medicine=  " );
    		scanf("%s",str );
    		validname=alpha(str);
    	}while(validname!=0);
		strcpy(name, str); ;
    	
    printf("\nEnter the Quantity =  ");
    scanf("%d",&qty );
    printf("\nEnter the rate =  ");
    scanf("%d",&rate );
    amt=qty*rate;
    printf("\nThe total amount is =%d ", amt);
    medicine(&qty);
    printf("\nThe new medicines has been updated to=%d", qty);
    amt=qty*rate;
    printf("\nThe updated bill amount for is = %d",amt );
    
    break;
    
    case 2:
    printf("\nEnter the Medicine Reg.  =  ");
    scanf("%s",no );
    printf("\nEnter the name  of the medicine=  " );
    scanf("%s",name );
    printf("\nEnter the Quantity =  ");
    scanf("%d",&qty );
    printf("\nEnter the rate =  ");
    scanf("%d",&rate );
    amt=qty*rate;
    printf("\nThe total amount it %d =   ", amt);
    medicine_1(qty);
    printf("\nBut collect only %d =  ",amt );
  
	
	default : 
		printf("Invalid input");
		schedule();
		
}}


int digit(char num[])
 {
   int i=0,flag=0;
   while(num[i]!='\0')
    {
     if(!(num[i]>=48&&num[i]<=57))	{
     	printf("\nINVALID INPUT\n");	
	 
       flag=1;
       break;
 	}
     i++;
    }
  return flag;
 }
 
 
 
int alphanum(char num[])
 {
   int i=0,flag=0;
   while(num[i]!='\0')
    {
     if((num[i]>=48&&num[i]<=57)||((num[i]>=65&&num[i]<=91)||(num[i]>=97&&num[i]<123)))
       flag=1;
     else
      {
       flag=0;
       break;
      }
     i++;
    }
  return flag;
 }
 
 
 int alpha(char name[])
  {
    int i=0,flag=0;
    while(name[i]!='\0')
     {
       if(!((name[i]>=65&&name[i]<=90)||(name[i]>=97&&name[i]<122)))
 		{
 			printf("\nINVALID INPUT\n");	
			flag=1;
       		break;
        }
      i++;
     }
   return flag;
  }
