//Rock🪨 Paper📃 Scissor✂️
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int num,guess,ch,p=0;
	srand(time(0));
	do{
		printf("\n1.Stone\n2.Paper\n3.Scissor\n");
		printf("Enter your number:\n");
		num=rand()%3+1;
		scanf("%d",&guess);
		if(num==1 && guess==2 ){
			printf("You win\n");
			p+=5;
		}
			if(num==1 && guess==1 ){
			printf("Draw\n");
		}
			if(num==1 && guess==3 ){
			printf("You loss\n");
		}
			if(num==2 && guess==2 ){
			printf("Draw\n");
		}
			if(num==2 && guess==1 ){
			printf("You loss\n");
		}
			if(num==2 && guess==3 ){
			printf("You win\n");
			p+=5;
		}
			if(num==3 && guess==2 ){
			printf("You loss\n");
		}
			if(num==3 && guess==1 ){
			printf("You win\n");
			p+=5;
		}
			if(num==3 && guess==3 ){
			printf("Draw\n");
		}
		printf("Do you want to continue(1/0)?:\n");
		scanf("%d",&ch);
	}while(ch==1);
	printf("Your points: %d",p);
}
