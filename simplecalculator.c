#include<stdio.h>
int main()
{
	double v1,v2;
	char operator;
	printf("Enter an operator (+, -, *, /):");
	scanf("%c",&operator);
	printf("enter the value1:");
	scanf("%lf",&v1);
	printf("enter the value2:");
	scanf("%lf",&v2);
	
switch(operator)
{
	case '+':
		printf("\n%.6lf+%.6lf=%.6lf",v1,v2,v1+v2);
		break;
	case '-':
		printf("\n%.6lf-%.6lf=%.6lf",v1,v2,v1-v2);
		break;
			case '*':
		printf("\n%.6lf*%.6lf=%.6lf",v1,v2,v1*v2);
		break;
			case '/':
		printf("\n%.6lf/%.6lf=%.6lf",v1,v2,v1/v2);
		break;	
		default:
            printf("Error! operator is not correct");	
}
	return 0;
}
