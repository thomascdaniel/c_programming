#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "validations.h"

int main(){
	char cn[10],n2[20];
    int n,i,*ptr,sum=0,ch;
    printf("\n.......MENU..... \n");
    printf("\n 1. malloc \n");
    printf("\n 2.calloc \n");
    printf("\n 3.realloc \n");
    printf("\n 4.free \n");
    printf("\n Enter the choice \n");
    scanf("%d",&ch);
    switch(ch)
    {
     	case 1:
			     	do{
					 printf("Enter number of elements: ");
			    	scanf("%s",cn);
					}while(!digit(cn));
					n=atoi(cn);
			    	ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc
			    	if(ptr==NULL)                     
					    {
					        printf("Error! memory not allocated.");
					        exit(0);
					    }
			    	printf("Enter elements of array: ");
			    	
				    for(i=0;i<n;++i)
					    {
					        scanf("%d",ptr+i);
					        sum+=*(ptr+i);
					    }
			    	printf("Sum=%d",sum);
			    	free(ptr);
			     	break;
     	case 2:
				    do{
					 printf("Enter number of elements: ");
			    	scanf("%s",cn);
					}while(!digit(cn));
					n=atoi(cn);
				    ptr=(int*)calloc(n,sizeof(int));
				    if(ptr==NULL)
				    {
				        printf("Error! memory not allocated.");
				        exit(0);
				    }
				    printf("Enter elements of array: ");
				    for(i=0;i<n;++i)
				    {
				        scanf("%d",ptr+i);
				        sum+=*(ptr+i);
				
				    }
				    printf("Sum=%d",sum);
					break;
		case 3:
				 	do{
					 printf("Enter number of elements: ");
			    	scanf("%s",cn);
					}while(!digit(cn));
					n=atoi(cn);
				    ptr=(int*)malloc(n*sizeof(int));
				    printf("Address of previously allocated memory: ");
				    for(i=0;i<n;++i)
				    printf("%u\t",ptr+i);
				    
				    
				    do{
					 printf("\nEnter new size of array: ");
			    	scanf("%s",n2);
					}while(!digit(n2));
					
				    ptr=realloc(ptr,n2);
				    for(i=0;i<atoi(n2);++i)
				    printf("%u\t",ptr+i);
					break;
					
		default:	printf("\n Enter wrong choice \n");
					break;
	}
return 0;
}
