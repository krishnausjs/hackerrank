#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
	double meal_cost;
	scanf("%lf",&meal_cost);
	int tip_percent;
	scanf("%i",&tip_percent);
	int tax_percent;
	scanf("%i",&tax_percent);
	double tip_cost;
	double tax_cost;
	printf("The total tip percent is %i percentage\n",tip_percent);
	printf("The tax tip percent is %i percentage\n",tax_percent);
	tip_cost = ((meal_cost*tip_percent)/100.0);
    if(tip_cost - abs(tip_cost) > 0.5)
		tip_cost += 1;

	tax_cost = ((meal_cost*tax_percent)/100.0);
	if(tax_cost - abs(tax_cost) > 0.5)
		tax_cost += 1;

	meal_cost = meal_cost + abs(tip_cost) + abs(tax_cost);
	printf("The total tip cost is %lf dollars\n",tip_cost);
	printf("The total tax cost is %lf dollars\n",tax_cost);
	printf("The total meal cost is %i dollars\n",abs(meal_cost));
	return 0;
}
