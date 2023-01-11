#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;


int main()
{
	
	string menuFlow = "Y";

	cout << "Welcome to Queue program \n\n";


	while (menuFlow == "Y")				// Main menu of the program
	{
		string opertation;

		system("cls");

		cout << "1- create a integer Queue\n";
		cout << "2- create a float Queue\n";
		cout << "3- create a double Queue\n";
		cout << "4- create a character Queue\n";
		cout << "5- create a string Queue\n";
		cout << "6- Exit\n";

		cin >> opertation;

		if (opertation == "1")	// Creating a integer Queue accourding to user choice
		{
			string QueueOperation;
			string subFlow = "Y";
			Queue <int> iQueue;

			system("cls");

			cout << "Integer Queue has been created \n\n";


			while (subFlow == "Y")
			{
				// Menu of Queue operations
				cout << "\n1- push()\n";
				cout << "2- pop()\n";
				cout << "3- display()\n";
				cout << "4- size()\n";
				cout << "5- Go to main menu\n";

				cin >> QueueOperation;

				if (QueueOperation == "1")
				{
					int iNumber;		// push_back the integer number into Queue

					cout << "Enter the integer number : ";
					cin >> iNumber;

					while (cin.fail())		//Checking from the input validation
					{
						cin.clear();
						cin.ignore(10000, '\n');

						cout << "Please enter a right input :";
						cin >> iNumber;

					}

					iQueue.push(iNumber);
					cout << "The number has been push() \n";
				}


				else if (QueueOperation == "2")   // POP the Queue
				{
					iQueue.pop();
					cout << "The Queue has been pop()\n";
				}






				else if (QueueOperation == "3")
				{
					cout << "==============================================\n\n";
					iQueue.display();
					cout << "\n\n==============================================\n";
				}


				else if (QueueOperation == "4")
				{
					cout << "The size of Queue is : " << iQueue.size() << "\n\n";
				}



				else if (QueueOperation == "5")
				{
					subFlow = "N";
				}

				else
				{
					system("cls");
				}
			}
		}

		else if (opertation == "2")	// Creating a float Queue accourding to user choice
		{
			string QueueOperation;
			string subFlow = "Y";
			Queue <float> fQueue;

			system("cls");

			cout << "Float Queue has been created \n\n";


			while (subFlow == "Y")
			{
				// Menu of Queue operations
				cout << "\n1- push()\n";
				cout << "2- pop()\n";
				cout << "3- display()\n";
				cout << "4- size()\n";
				cout << "5- Go to main menu\n";

				cin >> QueueOperation;

				if (QueueOperation == "1")
				{
					float fNumber;		// push_back the float number into Queue

					cout << "Enter the integer number : ";
					cin >> fNumber;

					while (cin.fail())		//Checking from the input validation
					{
						cin.clear();
						cin.ignore(10000, '\n');

						cout << "Please enter a right input :";
						cin >> fNumber;

					}

					fQueue.push(fNumber);
					cout << "The number has been push() \n";
				}


				else if (QueueOperation == "2")   // POP the Queue
				{
					fQueue.pop();
					cout << "The Queue has been pop()\n";
				}






				else if (QueueOperation == "3")
				{
					cout << "==============================================\n\n";
					fQueue.display();
					cout << "\n\n==============================================\n";
				}


				else if (QueueOperation == "4")
				{
					cout << "The size of Queue is : " << fQueue.size() << "\n\n";
				}



				else if (QueueOperation == "5")
				{
					subFlow = "N";
				}

				else
				{
					system("cls");
				}
			}
		}

		else if (opertation == "3")	// Creating a double Queue accourding to user choice
		{
		string QueueOperation;
		string subFlow = "Y";
		Queue <double> dQueue;

		system("cls");

		cout << "double Queue has been created \n\n";


		while (subFlow == "Y")
		{
			// Menu of Queue operations
			cout << "\n1- push()\n";
			cout << "2- pop()\n";
			cout << "3- display()\n";
			cout << "4- size()\n";
			cout << "5- Go to main menu\n";

			cin >> QueueOperation;

			if (QueueOperation == "1")
			{
				double dNumber;		// push_back the double number into Queue

				cout << "Enter the integer number : ";
				cin >> dNumber;

				while (cin.fail())		//Checking from the input validation
				{
					cin.clear();
					cin.ignore(10000, '\n');

					cout << "Please enter a right input :";
					cin >> dNumber;

				}

				dQueue.push(dNumber);
				cout << "The number has been push() \n";
			}


			else if (QueueOperation == "2")   // POP the Queue
			{
				dQueue.pop();
				cout << "The Queue has been pop()\n";
			}






			else if (QueueOperation == "3")
			{
				cout << "==============================================\n\n";
				dQueue.display();
				cout << "\n\n==============================================\n";
			}


			else if (QueueOperation == "4")
			{
				cout << "The size of Queue is : " << dQueue.size() << "\n\n";
			}



			else if (QueueOperation == "5")
			{
				subFlow = "N";
			}

			else
			{
				system("cls");
			}
		}
		}

		else if (opertation == "4")	// Creating a character Queue accourding to user choice
		{
		string QueueOperation;
		string subFlow = "Y";
		Queue <char> cQueue;

		system("cls");

		cout << "Character Queue has been created \n\n";


		while (subFlow == "Y")
		{
			// Menu of Queue operations
			cout << "\n1- push()\n";
			cout << "2- pop()\n";
			cout << "3- display()\n";
			cout << "4- size()\n";
			cout << "5- Go to main menu\n";

			cin >> QueueOperation;

			if (QueueOperation == "1")
			{
				char cChar;		// push_back the double number into Queue

				cout << "Enter the integer number : ";
				cin >> cChar;

				while (cin.fail())		//Checking from the input validation
				{
					cin.clear();
					cin.ignore(10000, '\n');

					cout << "Please enter a right input :";
					cin >> cChar;

				}

				cQueue.push(cChar);
				cout << "The number has been push() \n";
			}


			else if (QueueOperation == "2")   // POP the Queue
			{
				cQueue.pop();
				cout << "The Queue has been pop()\n";
			}



			else if (QueueOperation == "3")
			{
				cout << "==============================================\n\n";
				cQueue.display();
				cout << "\n\n==============================================\n";
			}


			else if (QueueOperation == "4")
			{
				cout << "The size of Queue is : " << cQueue.size() << "\n\n";
			}



			else if (QueueOperation == "5")
			{
				subFlow = "N";
			}

			else
			{
				system("cls");
			}
		}
		}

		else if (opertation == "4")	// Creating a string Queue accourding to user choice
		{
		string QueueOperation;
		string subFlow = "Y";
		Queue <string> sQueue;

		system("cls");

		cout << "Character Queue has been created \n\n";


		while (subFlow == "Y")
		{
			// Menu of Queue operations
			cout << "\n1- push()\n";
			cout << "2- pop()\n";
			cout << "3- display()\n";
			cout << "4- size()\n";
			cout << "5- Go to main menu\n";

			cin >> QueueOperation;

			if (QueueOperation == "1")
			{
				string sString;		// push_back the double number into Queue

				cout << "Enter the integer number : ";
				cin >> sString;

				while (cin.fail())		//Checking from the input validation
				{
					cin.clear();
					cin.ignore(10000, '\n');

					cout << "Please enter a right input :";
					cin >> sString;

				}

				sQueue.push(sString);
				cout << "The number has been push() \n";
			}


			else if (QueueOperation == "2")   // POP the Queue
			{
				sQueue.pop();
				cout << "The Queue has been pop()\n";
			}



			else if (QueueOperation == "3")
			{
				cout << "==============================================\n\n";
				sQueue.display();
				cout << "\n\n==============================================\n";
			}


			else if (QueueOperation == "4")
			{
				cout << "The size of Queue is : " << sQueue.size() << "\n\n";
			}



			else if (QueueOperation == "5")
			{
				subFlow = "N";
			}

			else
			{
				system("cls");
			}
		}
		}

		else
		{
		continue;
		}

	}

}

