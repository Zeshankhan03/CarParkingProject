#include <iostream>
using namespace std;

int main() {


	int input;
	int totalamount = 0, count = 0;
	int rickshaw = 0, car = 0, bus = 0;
	int rprice = 0, cprice = 0, bprice = 0;

	//menu
	while (true)
	{
		cout << "\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
		cout << "Welcome to Parking facility!!" << endl;
		cout << "\nPress 1 to Enter Rickshaw. " << endl;
		cout << "Press 2 to Enter Car. " << endl;
		cout << "Press 3 to Enter bus. " << endl;
		cout << "\nPress 4 to show the Record. " << endl;
		cout << "Press 5 to delete the Record." << endl;
		cout << "Press 6 to delete rickshaw's record" << endl;
		cout << "Press 7 to delete car's record" << endl;
		cout << "Press 8 to delete bus's record: " << endl;
		cout << "\nPress 9 to Exit the program" << endl;
		cin >> input;

		if (input == 1)
		{
			if (count <= 50)
			{
				rickshaw = rickshaw + 1;
				rprice = rprice + 100;
				totalamount = totalamount + 100;
				count = count + 1;
			}
			else
			{
				cout << "Im sorry but we're full!" << count << endl;
			}
		}
		else if (input == 2)
		{
			if (count <= 50)
			{
				car = car + 1;
				cprice = cprice + 200;
				totalamount = totalamount + 200;
				count = count + 1;
			}
			else
			{
				cout << "Im sorry but we're full!" << count << endl;
			}
		}
		else if (input == 3)
		{
			if (count <= 50)
			{
				bus = bus + 1;
				bprice = bprice + 300;
				totalamount = totalamount + 400;
				count = count + 1;
			}
			else
			{
				cout << "Im sorry but we're full!" << count << endl;
			}
		}
		else if (input == 4)
		{
			cout << "The Total amount is: " << totalamount << endl;
			cout << "The total amount of rickshaws is: " << rprice << endl;
			cout << "The total amount of cars is: " << cprice << endl;
			cout << "The total amount of buses parked is: " << bprice << endl;
			cout << "\nThe total number of vehicles parked: " << count << endl;
			cout << "The total number of rickshaws parked: " << rickshaw << endl;
			cout << "The total number of cars parked: " << car << endl;
			cout << "The total number of buses parked: " << bus << endl;
		}
		else if (input == 5)
		{
			totalamount = 0;
			count = 0;
			rprice = 0;
			rickshaw = 0;
			cprice = 0;
			car = 0;
			bprice = 0;
			bus = 0;
			cout << "The Total record has been deleted" << endl;
		}
		else if (input == 6)
		{
			rprice = 0;
			rickshaw = 0;
			cout << "The record for Rickshaws parked has been deleted" << endl;
		}
		else if (input == 7)
		{
			cprice = 0;
			car = 0;
			cout << "The record for cars parked has been deleted" << endl;
		}
		else if (input == 8)
		{
			bprice = 0;
			bus = 0;
			cout << "The record for buses parked has been deleted" << endl;
		}
		else if (input == 9)
		{
			exit(0);
		}
		else
		{
			cout << "Invalid input, Please enter the correct input to Proceed." << endl;
		}

	}
	return 0;
}
