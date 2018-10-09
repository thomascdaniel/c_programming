#include<stdio.h>
#include<conio.h>

int name_valid(char check[]);


int main()
	{
		int  days,discount, flag=0,  patient, condition, pat1=10, pat2=20, pat, med, expire, dis, rate, req;
		double amt, service_tax;
		char name[5][10], p_name[5][10];
			
			printf("****************WELCOME TO CHRIST HOSPITAL MANAGEMENT SYSTEM********************");
			printf("\n");
			printf("\n");
			printf("\t\tINFORMATION FROM CHMS: -\n");
			printf("\t\t\t1. Amount related issues\n");
			printf("\t\t\t2. Medicine Details \n");
			
		
		scanf("%d", &days);
		
		switch(days)
			{
				case 1: 
						{							
							printf("\t\t\tEnter whether the patient is \n");
				printf("\t\t\t1. Goverment employee\n");
				printf("\t\t\t2. Private employee\n");
				
					scanf("%d",&patient);
						
					switch(patient)
							{
							
							case 1: 
								{
									printf("\t\tFor the government employee\n");
								
								printf("\t\tEnter the amount Paid");
								scanf("%lf", &amt);
								
								if(amt>10000)
					
									{
										discount=1000;
										
										printf("\t\tDiscount= %d\n",discount);	
										printf("\t\tAmount=%lf", amt-discount);
									}
									
										
								else
									{
										printf("No discount");
									}
									
									break;
							}//end of sub case 1
							
								case 2:
									{
									
									  printf("\t\t\tFor the private employee\n");
								 
										do
											{	
											flag=0;
											printf("\t\t\t Enter the Patient Name = ");
											scanf("%s", name);
											printf("\n");
												
												flag=name_valid(name);
												if(flag==1)
												{
													printf("\nINVALID INPUT.\n");
												}
											}while(flag==1);
								  
								  printf("\t\t\tEnter the amount paid\n");
								  scanf("%lf", &amt);
								  if (amt >= 10000)
									{
							                service_tax = 320 + ((amt - 180) * 20)/100;
							        } 
									else if (amt >= 50000) 
									{
							                service_tax= 920 + ((amt - 180) * 30)/100;
							        } 
									else 
									{
							                service_tax = 0;
							        }
							         
							          
							          printf("\t\t\tThe name of the employess is %s\n", name);
							          printf("\t\t\tThe Amount is %lf\n", amt);
							          printf("\t\tTotal Amount (Including service TAX)will be %.2lfamt\n", (amt+service_tax));
			     					  printf("\tFor the private employee the service tax for %.2lf is %.2lf\n", amt, service_tax);
									break;
							}//end of sub
							 
								default:
									printf("\t\tChoose the correct option\n");
									break;
								}//end of switch(patient)
							}//end of case 1
							break;
					case 2:
							printf("\t\t\t\t Medicines Details\n");
							printf("\t\t\t1. Medicines Available\n");
							printf("\t\t\t2. Discount on medicines\n");
							printf("\t\t\t3. Expired Medicinest\n");
							printf("\t\t\t\t\n");
	
		
							printf("Enter which department do you want go: ");
							scanf("%d", &req);
		
						switch (req)
							{
								case 1:
									printf("Enter the number of medicines: ");
									scanf("%d", &med);
											if(med<=20)
												{
													for(med=5;med>=5;med--)
														{
															printf("Hydrocodone\nGeneric Zocor\nAzithromycin\nAmoxicillin\nGeneric Glucophage\n");
														}
												}
											else
												{
													printf("Out of Stock");
												}
											break;
									
							
							 case 2:
							 		printf("\t\t\t\tDiscount on the medicines:\n");
							 		
										while(dis<1000)
										{
											printf("Enter the amount:");
											scanf("%d", &rate);
											
											printf("Amount Details=%d\n", rate);
											if(rate>10000)
												
												{
													dis=1000;
													
													printf("Discount= %d\n",dis);	
													printf("Amount=%d", rate-dis);
												}
												
										}
										break;
								case 3:
											printf("No. of medicines expired\n");
											expire=20;
											do 
											{
												printf("Hydrocodone\nGeneric Zocor\nAzithromycin\nAmoxicillin\nGeneric Glucophage\n",expire);
												expire++;
											} while (expire < 5 && expire >=2);
				
											break;
								default:
									printf("Enter correct option");
									break;
							}			
			
			}
		
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
