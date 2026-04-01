// Smart Delivery Notification System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Notification
{

public:
	virtual void sendMessage()
	{
		cout << "Sending General Notification\n";
	}

};

class EmailNotification : public Notification
{

public:
	void sendMessage()
	{
		cout << "Sending Email Notification\n";
	}

};

class SMSNotification : public Notification
{

public:
	void sendMessage()
	{
		cout << "Sending SMS Notification\n";
	}

};
int main()
{

	Notification *notification_pointer;

	EmailNotification email_object;
	SMSNotification sms_object;

	notification_pointer =  &email_object;
	notification_pointer->sendMessage();

	notification_pointer = &sms_object;
	notification_pointer->sendMessage();


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
