#include <stdio.h>


int getFirstNumber() {
	int firstNumber = 0;
	printf("Type in your first number: ");
	scanf("%d", &firstNumber);
	return firstNumber;
}

int getSecondNumber() {
	int firstNumber = 0;
	printf("Type in your second number: ");
	scanf("%d", &firstNumber);
	return firstNumber;
}

int calculate(char operand, int one, int two) {
	switch(operand) {
		case '+':
			printf("Addition");
			break;
		case '*':
			printf("multiplication");
			break;
		case '/':
			printf("division");
			break;
		case '-':
			printf("subtraction");
			break;
	}

	return one + two;
}


char getOperand() {
	char operand = '+';
	printf("Enter your operand (+,*,-,/): ");
	scanf("%c", &operand);
	return operand;
}


int main(){
	int one = getFirstNumber();
	int two = getSecondNumber();
	
	char operand = getOperand();
	
	int result = calculate(operand, one, two);

	printf("The result is %d: ", result);
	return 0;
}
