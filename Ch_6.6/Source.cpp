// Chapter 6 - Programming Challenge 6, Shipping charges
// This program calculates the shipping charges

#include <iostream>
#include <iomanip>
using namespace std;

double calculateCharge(double, double);

int main()
{
	double distance, packageWeight, rate,
		totalWeight = 0;

	cout << fixed << setprecision(2);

	cout << "Please enter the weight of a package (in kilograms): ";
	cin >> packageWeight;

	while (packageWeight != 0)
	{
		if (packageWeight > 0)
		{
			totalWeight += packageWeight;
			cout << "Please enter the weight of a package (in kilograms): ";
			cin >> packageWeight;
		}
		else
		{
			cout << "The weight of a package cannot be negative. Please enter a valid number: ";
			cin >> packageWeight;
		}
	}

	if (totalWeight <= 2)
		rate = 3.1;
	else if (totalWeight <= 6)
		rate = 4.20;
	else if (totalWeight <= 10)
		rate = 5.30;
	else
		rate = 6.40;

	cout << "Please enter the distance the package is to be shipped (in miles): ";
	cin >> distance;

	cout << "The shipping charge (in dollars): ";
	cout << calculateCharge(rate, distance) << endl;

	system("PAUSE");

	return 0;
}
double calculateCharge(double RATE_PER_500_MILES, double milesShipped) {
	
	return RATE_PER_500_MILES * (milesShipped/500);	
}