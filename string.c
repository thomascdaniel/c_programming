#include <stdio.h>
#include<string.h>

int s_Length(char*);
int s_Lwr(char *s);
int s_Upr(char *s);
int s_Cat (char *s1,char *s2);

int main()
{
    int req;
	char name[100],str[100],str1[100],str2[100];
	
		
	printf("\n****************Christ Hospital Management System****************\n");
	
	a:
	printf("\n1.To see Length of the String");
	printf("\n2.To see Lower case and Upper case");
	printf("\n3.To see Concatenation");
	printf("\n4.Exit");

	printf("\n\nEnter your choice = ");
	
	scanf("%d", &req);
	switch(req)
			{
				case 1: 
				
					printf("Enter The Name of the Patient :");
				    scanf("%s", name);
				    printf("Word length is : %d\n",s_Length(name));
					goto a;
					break;
									
				
				case 2:
				
					printf("Enter the Doctor Name : ");
				     scanf("%s", str);
				    s_Lwr(str);
				    printf("\nString after String Lower : %s",str);
				    s_Upr(str);
				    printf("\nString after String UPPER : %s",str);
				    goto a;
					break;
				    
				case 3:
					printf("Enter  First name : ");
				    scanf("%s", str1);
				 
				    printf("Enter  Last name : ");
				    scanf("%s", str2);
				 
				    s_Cat(str1,str2);
				    printf("\nAfter concatenate strings are :\n");
				    printf("String 1: %s \nString 2: %s",str1,str2);
				 
				    printf("\n");
				    goto a;
					break;
					
				case 4: 
					printf("Exited");
					break;
					
				default: 
				printf("Nothing");
				break;
			}
}
//Lenght of the String: -
int s_Length(char* name)
{
    int i=0,count=0;
    while(name[i++]!='\0')
        count+=1;
    return count;
}

//Upper and lower case
int s_Lwr(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        ++i;
    }
}
 
int s_Upr(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
        ++i;
    }
}

//Concatenate
int s_Cat (char *s1,char *s2)
{
    int len,i;
    len=strlen(s1)+strlen(s2);
    if(len>100)
    {
        printf("\nCan not Concatenate !!!");
        return;
    }
     
    len=strlen(s1);
    for(i=0;i< strlen(s2); i++)
    {
        s1[len+i]=s2[i];
    }
    s1[len+i]='\0'; //terminates by NULL
}
