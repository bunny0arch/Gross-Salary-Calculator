#include<stdio.h>
int main()
{
	float hra,da,gross;
	int basic;
	char c;
	printf("\n==========GROSS SALARY CALCULATOR==========");
	while(1)
	{
		printf("\n\n\n\nEnter Basic Salary: ");
		scanf("%d",&basic);
		printf("\nEnter HRA: ");
		scanf("%f",&hra);
		printf("\nEnter DA: ");
		scanf("%f",&da);
		gross=(basic*hra/100)+(basic*da/100)+basic;
		printf("\n\nGross Salary including %.1f HRA and %.1f DA is: %.1f\n",hra,da,gross);
		printf("\nEnter C to Continue, Q to Quit: ");
		scanf(" %c",&c);
		if(c=='Q'||c=='q')
			break;
	}
	return 0;
}
