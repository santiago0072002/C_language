#include<stdio.h>  /* I learned this code by looking at Caleb Curry youtube channel. */

int main()
{
	int age; 

	printf("What is your age?   \n");
	scanf("%d", &age); 
	
    if(age < 13)
    {
        printf("You're a youngling\n");
    }
    else if(age > 12 && age < 20) //NOT  12 < age < 20
    {
        printf("You're a teenager\n");
    } else 
    {
        printf("You're an old man\n");
    }
	return 0; 
