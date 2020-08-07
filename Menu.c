#include<stdio.h>
main()
{
	printf(" Chhose your food item : \n1. Hamburger, \nRs149 \n2. Cold Coffe, \n Rs99 \n3. French Fries, \n Rs 69 \n4. Shake \nRs 149 \n5. Pizza \n259");
	int choice=0;
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
		printf(" You chose Hamburger, Rs149");
		break;
		case 2:
		printf("You chose Cold Coffe, Rs99");
		break;
		case 3:
		printf("You chose French Fries, Rs 69");
		break;
		case 4:
		printf("You chose Shake, Rs149");
		break;
		case 5:
		printf("You chose Pizza, Rs259");
		break;
		default : printf("Invalid Choice");
	}
}
