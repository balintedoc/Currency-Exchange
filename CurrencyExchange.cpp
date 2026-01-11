#include <iostream>
#include <iomanip>

using namespace std;


int main() {
	int choiceFrom, choiceTo;
	double amount;


	double USD = 1.0;
	double EUR = 0.92;
	double GBP = 0.79;
	double INR = 83.10;
	double JPY = 147.50;


	double fromRate = 1.0, toRate = 1.0;

	cout << "===========================\n";
	cout << "     Currency Exchange\n";
	cout << "===========================\n";

	cout << "Select Base currency:\n";
	cout << "1. USD\n2. EUR\n3. GBP\n4. INR\n5. JPY\n";
	cout << "Enter choice: ";
    cin >> choiceFrom;

	cout << "\nSelect Target Currency:\n";
	cout << "1. USD\n2. EUR\n3. GBP\n4. INR\n5. JPY\n";
	cout << "Enter Choice: ";
	cin >> choiceTo;

	cout << "Enter Amount: ";
	cin >> amount;


	switch (choiceFrom) {
		case 1: fromRate = USD; break;
		case 2: fromRate = EUR; break;
		case 3: fromRate = GBP; break;
		case 4: fromRate = INR; break;
		case 5: fromRate = JPY; break;
		default:
			cout << "Invalid Base currency selected.\n";
			return 0;
	}


	switch (choiceTo) {
		case 1: toRate = USD; break;
		case 2: toRate = EUR; break;
		case 3: toRate = GBP; break;
		case 4: toRate = INR; break;
		case 5: toRate = JPY; break;
		default:
			cout << "Invalid Target currency selected.\n";
			return 0;
	}


	double result = (amount / fromRate) * toRate;


	cout << fixed << setprecision(2);
	cout << "\nConverted Amount: " << result << endl;


	cout << "\nThank you for using my Currency Exchange Program!\n";
	return 0;

}

