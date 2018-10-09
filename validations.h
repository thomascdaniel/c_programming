#include<string.h>
#include<ctype.h>
int digit(char num[])
 {
   int i=0,flag=0;
   while(num[i]!='\0')
    {
     if(num[i]>=48&&num[i]<=57)
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
 
 int choice(char num[])
 {
   int i=0,flag=0;
  	
	   while(num[i]!='\0')
	    {
		     if(num[i]>=48&&num[i]<=50)
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
 
 int mobile(char mobile[])
		{
		   int i=0,flag=0,count=0;
		   for(i=0;mobile[i]!='\0';i++)
		   count++;
		   i=0;
			if(count<10||count>10)
			  	{
					
					return 0;
				}
			   while(mobile[i]!='\0')
			    {
				     if(mobile[i]>=48&&mobile[i]<=57)
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
   int i=0,flag=0,count=0;
   
   for(i=0;name[i]!='\0';i++)
		   count++;
		   i=0;
			if(count<3||count>20)
			  	{
					
					return 0;
				}
   
   
   
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
 
 


 int mobile1(char mobile[])
		{
		   int i=0,flag=0,count=0;
		   for(i=0;mobile[i]!='\0';i++)
		   count++;
		   i=0;
			if(count<10||count>10)
			  	{
					
					return 0;
				}
			   if(mobile[i]!='\0')
			    {
				     if(mobile[i]>=48&&mobile[i]<=57)
				       flag=1;
				     else
				      {
					       flag=0;
					  }
					i++;
					mobile1(mobile);
			    }
		  return flag;
		}

 int pincode(char pincode[])
		{
		   int i=0,flag=0,count=0;
		   for(i=0;pincode[i]!='\0';i++)
		   count++;
		   i=0;
			if(count<6||count>6)
			  	{
					
					return 0;
				}
			   while(pincode[i]!='\0')
			    {
				     if(pincode[i]>=48&&pincode[i]<=57)
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
 int rating(char num[])
 {
   int i=0,flag=0;
   while(num[i]!='\0')
    {
     if(num[i]>=49&&num[i]<=52)
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
 int choice1(char num[])
 {
   int i=0,flag=0;
  	
	   while(num[i]!='\0')
	    {
		     if(num[i]>=49&&num[i]<=50)
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
 int float_chk(char num[])
 {
   int i=0,flag=0,count=0;
   while(num[i]!='\0')
    {
     if(num[i]==46)
	count++;
     if((num[i]>=48&&num[i]<=57)||num[i]==46)
       flag=1;
     else
      {
       flag=0;
       break;
      }
     i++;
    }
  if(count!=1)
   return(0);
  return flag;
 }
