#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int number,guess,nguess=1;
	srand(time(0));
	number=rand()%100+1;
	do
	{
		printf("guess a  nummber betweeen 1 to 100\n");
		scanf("%d",&guess);
		if(guess>number){
			printf("choose smaller one");
		}
		else if(guess<number){
			printf("choose larger one");
		}
		else{
			printf("yeh you got it in %d attempts",nguess);
		}
		nguess++;
	}
	while(guess!=number);
}
