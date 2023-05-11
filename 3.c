#include <stdio.h>
#define VAT 0.1
#define FEE 0.06
int main() {
	float price, cash_price, card_price;

	printf("Input the Price : ");
	scanf_s("%f", &price);

	cash_price = price + price * VAT;
	card_price = cash_price + cash_price * FEE;

	printf("You can pay cash or credit card.");
	printf("\nIf you want to pay credit card, CREDIT FEE is %.2f * %.2f.", price, FEE);
	printf("\nThe VAT on %.2f is %.2f", price, price*VAT);
	printf("\nCash : %.2f\nCredit Card : %.2f", cash_price, card_price);
}
