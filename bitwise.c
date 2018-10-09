#include<conio.h> 
#include<stdio.h> 


int alpha(char []);  


void bin(unsigned n) 
			{ 
			 unsigned i; 
			 for (i = 1 << 31; i > 0; i = i / 2) 
			  (n & i)? printf("1"): printf("0"); 
			}  
			
			
int main() 
{ 




 bin(60); 
 printf("\n"); 
 bin(13); 
  
  
   unsigned int a = 60; /* 60 = 0011 1100 */   
   unsigned int b = 13; /* 13 = 0000 1101 */ 
   int c = 0;             
   c = a & b;       /* 12 = 0000 1100 */  
   printf("\nLine 1 - Value of c is %d\n", c );  
   c = a | b;       /* 61 = 0011 1101 */ 
   printf("Line 2 - Value of c is %d\n", c );  
   c = a ^ b;       /* 49 = 0011 0001 */ 
   printf("Line 3 - Value of c is %d\n", c );  
   c = ~a;          /*-61 = 1100 0011 */ 
   printf("Line 4 - Value of c is %d\n", c );  
   c = a << 2;     /* 240 = 1111 0000 */ 
   printf("Line 5 - Value of c is %d\n", c ); 
 
   c = a >> 2;     /* 15 = 0000 1111 */ 
   printf("Line 6 - Value of c is %d\n", c ); 
    
	
	char name[10]; 
    
	name:printf("\n Enter name \n"); 
 	scanf("%s",&name); 
 
 
 
 		if(!alpha(name)) 
			 { 
			  printf("\n invalid name"); 
			  goto name; 
			 }  
 
 
 
 	int tyre; 
			 printf("\n Enter the list of medicines which the Patient wants:\n1. A medicine\n2. B medicine\n3. C medicine\n4. D medicine"); 
			 scanf("%d",&tyre); 
			 switch(tyre) 
			 { 
			  case 1: printf("\n A medicine Rs.1200"); 
			  break; 
			  case 2: printf("\n B medicine  Rs.20000"); 
			  break; 
			  case 3: printf("\n C medicine  Rs.1800"); 
			  break; 
			  case 4: printf("\n D medicine  Rs.1450"); 
			  break; 
			  
			  default: printf("\n Invalid entry"); 
			  break; 
			 }
 
} 






 int alpha(char name[]) 
  {  
  
    int i=0,flag=0; 
    while(name[i]!='\0') 
     { 
       if((name[i]>=65&&name[i]<=90)||(name[i]>=97&&name[i]<122)) 
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
