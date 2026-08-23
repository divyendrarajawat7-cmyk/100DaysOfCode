// A program to calculate the profit and loss percentage 

#include <stdio.h>

int main(){
	float tp, tl, profit, loss, sp, cp;

	// Take user input for cost price and selling price
	printf("Enter the cost price: ");
	scanf("%f", &cp);
	printf("Enter the selling price: ");
	scanf("%f", &sp);

	// Implement conditional statment 
	if (sp > cp){
		profit = sp - cp;
		tp = (profit/cp) * 100;

		printf("Total profit: %.2f%%", tp);
	} else if (cp > sp){
		loss = cp - sp;
		tl = (loss/cp) * 100;

		printf("Total loss: %.2f%%", tl);
	} else {
		printf("No profit, no loss\n");
	}

	return 0;
}


