// Online Food Order Tracking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class OrderStatus
{

public:
	virtual void showStatus()
	{

		cout << "Order status unavailable\n";
	}

};

class Preparing : public OrderStatus
{

public:
	void showStatus()
	{
		cout << "Order is being prepared\n";
	}
};

class OutForDelivery : public OrderStatus
{
public:
	void showStatus()
	{
		cout << "Order is out for delivery\n";
	}
};

class Deliverd : public OrderStatus
{

public:
	void showStatus()
	{
		cout << "Order has been deliverd\n";
	}
};



int main()
{

	OrderStatus *status_pointer;

	Preparing preparing_object;
	OutForDelivery out_for_delivery_object;
	Deliverd deliverd_object;

	status_pointer = &preparing_object;
	status_pointer->showStatus();

	status_pointer = &out_for_delivery_object;
	status_pointer->showStatus();

	status_pointer = &deliverd_object;
	status_pointer->showStatus();




	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
