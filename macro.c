#include<stdio.h>
#include<conio.h>
#define pf printf
#define dis_1 1000
#define dis_2 10000
#define dis_3 50000


int name_valid(char check[]);


int main()
	{
		int  days,discount, flag=0,  patient, condition, pat1=10, pat2=20, pat, med, expire, dis, rate, req;
		double amt, service_tax;
		char name[5][10], p_name[5][10];
			
			pf("****************WELCOME TO CHRIST HOSPITAL MANAGEMENT SYSTEM********************");
			pf("\n");
			pf("\n");
			pf("\t\tINFORMATION FROM CHMS: -\n");
			pf("\t\t\t1. Amount related issues\n");
			pf("\t\t\t2. Medicine Details \n");
			
		
		scanf("%d", &days);
		
		switch(days)
			{
				case 1: 
						{							
							pf("\t\t\tEnter whether the patient is \n");
				pf("\t\t\t1. Goverment employee\n");
				pf("\t\t\t2. Private employee\n");
				
					scanf("%d",&patient);
						
					switch(patient)
							{
							
							case 1: 
								{
									pf("\t\tFor the government employee\n");
								
								pf("\t\tEnter the amount Paid");
								scanf("%lf", &amt);
								
								if(amt>dis_2)
					
									{
										discount=dis_1;
										
										pf("\t\tDiscount= %d\n",discount);	
										pf("\t\tAmount=%lf", amt-discount);
									}
									
										
								else
									{
										pf("No discount");
									}
									
									break;
							}//end of sub case 1
							
								case 2:
									{
									
									  pf("\t\t\tFor the private employee\n");
								 
										do
											{	
											flag=0;
											pf("\t\t\t Enter the Patient Name = ");
											scanf("%s", name);
											pf("\n");
												
												flag=name_valid(name);
												if(flag==1)
												{
													pf("\nINVALID INPUT.\n");
												}
											}while(flag==1);
								  
								  pf("\t\t\tEnter the amount paid\n");
								  scanf("%lf", &amt);
								  if (amt >= dis_2)
									{
							                service_tax = 320 + ((amt - 180) * 20)/100;
							        } 
									else if (amt >= dis_3) 
									{
							                service_tax= 920 + ((amt - 180) * 30)/100;
							        } 
									else 
									{
							                service_tax = 0;
							        }
							         
							          
							          pf("\t\t\tThe name of the employess is %s\n", name);
							          pf("\t\t\tThe Amount is %lf\n", amt);
							          pf("\t\tTotal Amount (Including service TAX)will be %.2lfamt\n", (amt+service_tax));
			     					  pf("\tFor the private employee the service tax for %.2lf is %.2lf\n", amt, service_tax);
									break;
							}//end of sub
							 
								default:
									pf("\t\tChoose the correct option\n");
									break;
								}//end of switch(patient)
							}//end of case 1
							break;
					case 2:
							pf("\t\t\t\t Medicines Details\n");
							pf("\t\t\t1. Medicines Available\n");
							pf("\t\t\t2. Discount on medicines\n");
							pf("\t\t\t3. Expired Medicinest\n");
							pf("\t\t\t\t\n");
	
		
							pf("Enter which department do you want go: ");
							scanf("%d", &req);
		
						switch (req)
							{
								case 1:
									pf("Enter the number of medicines: ");
									scanf("%d", &med);
											if(med<=20)
												{
													for(med=5;med>=5;med--)
														{
															pf("Hydrocodone\nGeneric Zocor\nAzithromycin\nAmoxicillin\nGeneric Glucophage\n");
														}
												}
											else
												{
													pf("Out of Stock");
												}
											break;
									
							
							 case 2:
							 		pf("\t\t\t\tDiscount on the medicines:\n");
							 		
										while(dis<dis_1)
										{
											pf("Enter the amount:");
											scanf("%d", &rate);
											
											pf("Amount Details=%d\n", rate);
											if(rate>dis_2)
												
												{
													dis=dis_1;
													
													pf("Discount= %d\n",dis);	
													pf("Amount=%d", rate-dis);
												}
												
										}
										break;
								case 3:
											pf("No. of medicines expired\n");
											expire=20;
											do 
											{
												pf("Hydrocodone\nGeneric Zocor\nAzithromycin\nAmoxicillin\nGeneric Glucophage\n",expire);
												expire++;
											} while (expire < 5 && expire >=2);
				
											break;
								default:
									pf("Enter correct option");
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
