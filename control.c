#include<stdio.h>

int main()
	{
		int med, expire, dis, rate, req;
		
		printf("*******************CHIRST HOSPITAL MANAGEMENT SYSTEM*********************\n");
		printf("\n");
	
		
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
		
        return 1;  
	}





