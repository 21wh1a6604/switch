#include<stdio.h>
int main()
{
	printf("pick an item,price:\n1.pizza \n2.burger \n3.pasta \n4.french fries \n5.sandwitch");
	int choice =0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("food item is pizza \nrs239");
		break;
		case 2:
			printf("food item is burger|nrs129");
			break;
			case 3:
				printf("food item is pasta \nrs179");
				break;
	case 4:
	printf("food item is french fries \nrs99");		
			break;
			case 5:
			printf("food item is sandwitch \nrs149");
			break;
			default:printf("invalid choice");	
	}
}
