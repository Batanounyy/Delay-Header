//This file is an example for the project
//You can Download its build from the Repository

#include <iostream>
#include "Delay.h"
using namespace std;

int main() {

	cout << "Choose Category" << endl;
	int choice;
	cout << "1. Delay in Seconds" << endl;
	cout << "2. Delay in Milliseconds" << endl;
	cout << "3. Delay in Microseconds" << endl;
	cout << "4. Delay in Nanoseconds" << endl;
	cout << "5. Delay in Seconds with Counter" << endl;
	cout << "6. Delay in Seconds with Counter Error Output" << endl;
	cout << "Enter your choice (1-6): ";
	cin >> choice;
	long long time;
	switch (choice) {
	case 1:
		cout << "Enter time in seconds: ";
		cin >> time;
		Delay::delay_s(time);
		cout << "Done!";
		break;
	case 2:
		cout << "Enter time in milliseconds: ";
		cin >> time;
		Delay::delay_ms(time);
		cout << "Done!";
		break;
	case 3:
		cout << "Enter time in microseconds: ";
		cin >> time;
		Delay::delay_us(time);
		cout << "Done!";
		break;
	case 4:
		cout << "Enter time in nanoseconds: ";
		cin >> time;
		Delay::delay_ns(time);
		cout << "Done!";
		break;
	case 5:
		cout << "Enter time in seconds for counter: ";
		cin >> time;
		Delay::delay_s_counter(time);
		cout << "Done!";
		break;
	case 6:
		cout << "Enter time in seconds for error counter: ";
		cin >> time;
		Delay::delay_s_counterErr(time);
		cout << "Done!";
		break;
	default:
		cout << "Invalid choice!" << endl;
	}
	


	return 0;
}
