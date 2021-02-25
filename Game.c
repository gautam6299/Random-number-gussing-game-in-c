#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int main(){
	int number,guess,nguess=1;
	srand(time(0));
	number=rand()%100+1;
	
	do{
		printf("Guess Number from 1 to 100\n");
		scanf("%d",&guess);
		if(guess>number){
			printf("Lower Number Please\n");
		}
		else if(guess<number){
			printf("Higher nunber please\n");
		}
		else{
			printf("the complete is %d attempts\n",nguess);
			
		}
		nguess++;
		  
	}while(guess!=number);
	
	return 0;
}
