#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int addition();
int substraction();
int mulplication();
int division();

int correctAnswers = 0; // Declared Global variables otherwise it wont read the correctAnswers and ttlProblems
int ttlProblems = 0;

int main()
{
	int number;
	double average;

    printf("\n                       :::::::::::::::::::::::::::::::::::::");
    printf("\n                       ::                                ::");
    printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
    printf("\n                       ::     |                     |     ::");
    printf("\n                       ::     |      WELCOME TO      |     ::");
    printf("\n                       ::     |        CRAZY          |     ::");
    printf("\n                       ::     |      MATH GAME!   	 |     ::");
    printf("\n                       ::     |  by Hector Santiago    |     ::");
    printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@@@@    ::");
    printf("\n                       ::                                 ::");
    printf("\n                       :::::::::::::::::::::::::::::::::::::\n\n");
		printf("\n Hey Friend!! Want to play some math!! Even a cavemen can do it! Read below or press -1 to exit the game");
    printf("\n Press 1 for addition then press Enter");
    printf("\n Press 2 for subtraction then press Enter");
    printf("\n Press 3 for Multiplication then press Enter");
    printf("\n Press 4 for Division then press Enter");
    printf("\n Press 5 to Exit");
    printf("\n Enter your choice there-->>>   ");
	scanf("%d",&number);

	while (number != -1)
	{

	if (number == 1)
	{
		addition();
	}
	else if (number== 2 )
	{
		substraction();
	}
	else if (number== 3 )
	{
		multiplication();
	}
	else if (number== 4)
	{
		division();
	}
	else
	{
	average = (float)correctAnswers/(float)ttlProblems;
	average = average * 100;
	printf("Bye!! ");
	printf("The Number of Correct answers were: %d the number of total problems were %d for an average of %.2f %%", correctAnswers, ttlProblems, average);
	break;
	}


	printf("\n Hey Friend!! Want to play some math!! Read below or press -1 to exit the game");
	printf("\n Press 1 for addition");
	printf("\n Press 2 for subtraction");
	printf("\n Press 3 for Multiplication");
	printf("\n Press 4 for Division");
	printf("\n Press 5 to Exit and see result");
	printf("\n Enter your choice there-->>> ");
	scanf("%d",&number);

	} // this is the last bracket of the while loop	// this is the last bracket of the while loop
	return 0;
	} // last bracket of main
int addition()
{
	int difficulty;

	printf("Select the difficulty level; Type 1 for easy, type 2 for medium or type 3 for hard \n");
	scanf("%i", &difficulty);

	if (difficulty==1)
	{

	int input;
  float num1, num2, total, total1;
	double num3, num4;
	num3=rand()%10+1;
	num4=rand()%10+1;
	double n;
	n=0;

	printf("%.2f + %.2f =? ",num3, num4);
	scanf ("%f", &num1);
	++ttlProblems;

	num2 = num3 + num4;

	if (num1 == num2)
	{
	printf("Correct!\n");
	++correctAnswers;
	}
	else
	{
	printf("Sorry incorrect! %.2f + %.2f =? ",num3, num4);
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
	printf("Correct!");
	++correctAnswers;
	}
	else
	{
	printf("incorrect! one more time, %.2f + %.2f =? ",num3, num4 );
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
		printf("CORRECT FINALLY!!\n");
		++correctAnswers;
	}
	else
	{
	printf("That was your third Try! \n");
	} // Last Bracket for Third ELse.
	} // last bracket for second else
	} // last bracket for first else
	}// last bracket for easy addition difficulty

	else if (difficulty==2)
	{

	int input, i, val;
  float num1, num2, total, total1;
	double num3, num4;
	num3=rand()%100+1;
	num4=rand()%100+1;
	double n;
	n=0;

	printf("%.2f + %.2f =? ",num3, num4);
	scanf ("%f", &num1);
	++ttlProblems;

	num2 = num3 + num4;

	if (num1 == num2)
	{
	printf("Correct!\n");
	++correctAnswers;
	}
	else
	{
	printf("Sorry incorrect! %.2f + %.2f =? ",num3, num4);
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
	printf("Correct!");
	++correctAnswers;
	}
	else
	{
	printf("incorrect! one more time, %.2f + %.2f =? ",num3, num4 );
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
		printf("CORRECT FINALLY!!\n");
		++correctAnswers;
	}
	else
	{
	printf("That was your third Try! \n");
	} // Last Bracket for Third ELse.
	} // last bracket for second else
	} // last bracket for first else
	}// last bracket for medium addition difficulty
	else if (difficulty==3)
	{
	int input;
  float num1, num2, total, total1;
	double num3, num4;
	num3=rand()%1000+1;
	num4=rand()%1000+1;
	double n;
	n=0;

	printf("%.2f + %.2f =? ",num3, num4);
	scanf ("%f", &num1);
	++ttlProblems;

	num2 = num3 + num4;

	if (num1 == num2)
	{
	printf("Correct!\n");
	++correctAnswers;
	}
	else
	{
	printf("Sorry incorrect! %.2f + %.2f =? ",num3, num4);
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
	printf("Correct!");
	++correctAnswers;
	}
	else
	{
	printf("incorrect! one more time, %.2f + %.2f =? ",num3, num4 );
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
		printf("CORRECT FINALLY!!\n");
		++correctAnswers;
	}
	else
	{
	printf("That was your third Try! \n");
	} // Last Bracket for Third ELse.
	} // last bracket for second else
	} // last bracket for first else
	}// last bracket for hard addition difficulty
	else
	{
		printf("wrong choice\n");
	}

return;
} 		// last bracket for function addition.

int substraction()
{	int difficulty;


	printf("Select the difficulty level; Type 1 for easy, type 2 for medium or type 3 for hard \n");
	scanf("%i", &difficulty);

	if (difficulty==1)
	{

int input;
    float num1, num2, total, total1;
	double num3, num4;
	num3=rand()%10+1;
	num4=rand()%10+1;
	double n;
	n=0;

	printf("%.2f - %.2f =? ",num3, num4);
	scanf ("%f", &num1);
	++ttlProblems;

	num2 = num3 - num4;

	if (num1 == num2)
	{
	printf("Correct!\n");
	++correctAnswers;
	}
	else
	{
	printf("Sorry incorrect! %.2f - %.2f =? ",num3, num4);
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
	printf("Correct!");
	++correctAnswers;
	}
	else
	{
	printf("incorrect! one more time, %.2f - %.2f =? ",num3, num4 );
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
		printf("CORRECT FINALLY!!\n");
		++correctAnswers;
	}
	else
	{
	printf("That was your third Try! \n");
	} // Last Bracket for Third ELse.
	} // last bracket for second else
	} // last bracket for first else
	}// last bracket for easy Substraction difficulty

	else if (difficulty==2)
	{

	int input;
    float num1, num2, total, total1;
	double num3, num4;
	num3=rand()%100+1;
	num4=rand()%100+1;
	double n;
	n=0;

	printf("%.2f - %.2f =? ",num3, num4);
	scanf ("%f", &num1);
	++ttlProblems;

	num2 = num3 - num4;

	if (num1 == num2)
	{
	printf("Correct!\n");
	++correctAnswers;
	}
	else
	{
	printf("Sorry incorrect! %.2f - %.2f =? ",num3, num4);
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
	printf("Correct!");
	}
	else
	{
	printf("incorrect! one more time, %.2f - %.2f =? ",num3, num4 );
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
		printf("CORRECT FINALLY!!\n");
	}
	else
	{
	printf("That was your third Try! \n");
	} // Last Bracket for Third ELse.
	} // last bracket for second else
	} // last bracket for first else
	}// last bracket for medium Substraction difficulty
	else if (difficulty==3)
	{
	int input;
    float num1, num2, total, total1;
	double num3, num4;
	num3=rand()%1000+1;
	num4=rand()%1000+1;
	double n;
	n=0;

	printf("%.2f - %.2f =? ",num3, num4);
	scanf ("%f", &num1);
	++ttlProblems;

	num2 = num3 - num4;

	if (num1 == num2)
	{
	printf("Correct!\n");
	++correctAnswers;
	}
	else
	{
	printf("Sorry incorrect! %.2f - %.2f =? ",num3, num4);
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
	printf("Correct!");
	++correctAnswers;
	}
	else
	{
	printf("incorrect! one more time, %.2f - %.2f =? ",num3, num4 );
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
		printf("CORRECT FINALLY!!\n");
		++correctAnswers;
	}
	else
	{
	printf("That was your third Try! \n");
	} // Last Bracket for Third ELse.
	} // last bracket for second else
	} // last bracket for first else
	}// last bracket for hard substraction difficulty
	else
	{
		printf("wrong choice\n");
	}

return;
} 		// last bracket for function substraction
int multiplication()
{
	int difficulty;

	printf("Select the difficulty level; Type 1 for easy, type 2 for medium or type 3 for hard \n");
	scanf("%i", &difficulty);

	if (difficulty==1)
	{

	int input;
    float num1, num2, total, total1;
	double num3, num4;
	num3=rand()%10+1;
	num4=rand()%10+1;
	double n;
	n=0;

	printf("%.2f X  %.2f =? ",num3, num4);
	scanf ("%f", &num1);
	++ttlProblems;

	num2 = num3 * num4;

	if (num1 == num2)
	{
	printf("Correct!\n");
	++correctAnswers;
	}
	else
	{
	printf("Sorry incorrect! %.2f X %.2f =? ",num3, num4);
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
	printf("Correct!");
	++correctAnswers;
	}
	else
	{
	printf("incorrect! one more time, %.2f X %.2f =? ",num3, num4 );
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
		printf("CORRECT FINALLY!!\n");
		++correctAnswers;
	}
	else
	{
	printf("That was your third Try! \n");
	} // Last Bracket for Third ELse.
	} // last bracket for second else
	} // last bracket for first else
	}// last bracket for easy multiplication difficulty

	else if (difficulty==2)
	{

	int input;
  float num1, num2, total, total1;
	double num3, num4;
	num3=rand()%100+1;
	num4=rand()%100+1;
	double n;
	n=0;

	printf("%.2f X %.2f =? ",num3, num4);
	scanf ("%f", &num1);
	++ttlProblems;

	num2 = num3 * num4;

	if (num1 == num2)
	{
	printf("Correct!\n");
	++correctAnswers;
	}
	else
	{
	printf("Sorry incorrect! %.2f X %.2f =? ",num3, num4);
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
	printf("Correct!");
	++correctAnswers;
	}
	else
	{
	printf("incorrect! one more time, %.2f X %.2f =? ",num3, num4 );
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
		printf("CORRECT FINALLY!!\n");
		++correctAnswers;
	}
	else
	{
	printf("That was your third Try! \n");
	} // Last Bracket for Third ELse.
	} // last bracket for second else
	} // last bracket for first else
	}// last bracket for medium multiplication difficulty
	else if (difficulty==3)
	{
	int input;
  float num1, num2, total, total1;
	double num3, num4;
	num3=rand()%1000+1;
	num4=rand()%1000+1;
	double n;
	n=0;

	printf("%.2f X %.2f =? ",num3, num4);
	scanf ("%f", &num1);
	++ttlProblems;

	num2 = num3 * num4;

	if (num1 == num2)
	{
	printf("Correct!\n");
	++correctAnswers;
	}
	else
	{
	printf("Sorry incorrect! %.2f X %.2f =? ",num3, num4);
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
	printf("Correct!");
	++correctAnswers;
	}
	else
	{
	printf("incorrect! one more time, %.2f X %.2f =? ",num3, num4 );
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
		printf("CORRECT FINALLY!!\n");
		++correctAnswers;
	}
	else
	{
	printf("That was your third Try! \n");
	} // Last Bracket for Third ELse.
	} // last bracket for second else
	} // last bracket for first else
	}// last bracket for hard multiplication difficulty
	else
	{
		printf("wrong choice\n");
	}

return;
} 		// last bracket for function multiplication.


int division()
{
	int difficulty;

	printf("Select the difficulty level; Type 1 for easy, type 2 for medium or type 3 for hard \n");
	scanf("%i", &difficulty);

	if (difficulty==1)
	{

	int input;
    float num1, num2, total, total1;
	double num3, num4;
	num3=rand()%10+1;
	num4=rand()%10+1;


	printf("%.2f /  %.2f =? ",num3, num4);
	scanf ("%f", &num1);
	++ttlProblems;

	num2 = num3 / num4;

	if (num1 == num2)
	{
	printf("Correct!\n");
	++correctAnswers;
	}
	else
	{
	printf("Sorry incorrect! %.2f / %.2f =? ",num3, num4);
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
	printf("Correct!");
	++correctAnswers;
	}
	else
	{
	printf("incorrect! one more time, %.2f / %.2f =? ",num3, num4 );
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
		printf("CORRECT FINALLY!!\n");
		++correctAnswers;
	}
	else
	{
	printf("That was your third Try! \n");
	} // Last Bracket for Third ELse.
	} // last bracket for second else
	} // last bracket for first else
	}// last bracket for easy Division difficulty

	else if (difficulty==2)
	{

	int input;
    float num1, num2, total, total1;
	double num3, num4;
	num3=rand()%100+1;
	num4=rand()%100+1;

	printf("%.2f / %.2f =? ",num3, num4);
	scanf ("%f", &num1);
	++ttlProblems;

	num2 = num3 / num4;

	if (num1 == num2)
	{
	printf("Correct!\n");
	++correctAnswers;
	}
	else
	{
	printf("Sorry incorrect! %.2f / %.2f =? ",num3, num4);
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
	printf("Correct!");
	++correctAnswers;
	}
	else
	{
	printf("incorrect! one more time, %.2f / %.2f =? ",num3, num4 );
	scanf("%f",&total);
	++ttlProblems;

	if (total == num2)
	{
		printf("CORRECT FINALLY!!\n");
		++correctAnswers;
	}
	else
	{
	printf("That was your third Try! \n");
	} // Last Bracket for Third ELse.
	} // last bracket for second else
	} // last bracket for first else
	}// last bracket for medium division difficulty
	else if (difficulty==3)
	{
	int input;
    float num1, num2, total, total1;
	double num3, num4;
	num3=rand()%1000+1;
	num4=rand()%1000+1;

	printf("%.2f / %.2f =? ",num3, num4);
	scanf ("%f", &num1);
	++ttlProblems;

	num2 = num3 / num4;

	if (num1 == num2)
	{
	printf("Correct!\n");
	++correctAnswers;
	}
	else
	{
	printf("Sorry incorrect! %.2f / %.2f =? ",num3, num4);
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
	printf("Correct!");
	++correctAnswers;
	}
	else
	{
	printf("incorrect! one more time, %.2f / %.2f =? ",num3, num4 );
	scanf("%f",&total);
	++ttlProblems;
	if (total == num2)
	{
		printf("CORRECT FINALLY!!\n");
		++correctAnswers;
	}
	else
	{
	printf("That was your third Try! \n");
	} // Last Bracket for Third ELse.
	} // last bracket for second else
	} // last bracket for first else
	}// last bracket for hard Division difficulty
	else
	{
		printf("wrong choice\n");
	}

return;
} 		// last bracket for Division .
