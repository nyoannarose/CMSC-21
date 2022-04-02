#include<stdio.h>
int main()
{
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);

	if(age>=13 && age<=19)
	{
	printf("Teenager = True");
	}
	else
	{
		printf("Teenager = False");
	}

	return 0;
}

