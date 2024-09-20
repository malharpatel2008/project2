#include<stdio.h>
int main(){
	
int marks;
printf("enter your marks");
scanf("%d",&marks);


int score;
score=marks>90?'A':marks>=80?'B':marks>=70?'C':marks>=60?'D':marks>=50?'E':'F';
printf("your grade is :%c  ",score);
  
switch(score){
	case 'A':
		printf("Excellent work  ");
	break;
	
	case 'B':
		printf("well done  ");
	break;
	case 'C':
		printf("good job ");
	break;
	case 'D':
		printf("you passed  ");
	break;
	case 'E':
		printf("try better  ");
	break;
	case 'F':
		printf("fail  ");
	break;
}
if(score=='A'){
	printf("congratulation   ");
}
else if(score=='B'){
	printf("congratulation   ");
	
}
else if(score=='C'){
	printf(" You are eligible for the next level   ");
}
else if(score=='D'){
	printf(" You are eligible for the next level   ");
}
else if(score=='E'){
	printf(" You are eligible for the next level   ");
}
else{
	printf(" Please try again next time");
}
}
