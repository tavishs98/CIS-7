#include <iostream>
#include <string>

using namespace std;

int main()
{
	string choice = "";
	do {
		//string connectors = "!V^";
		//string statements = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

		string input = "";
		cout << "Enter a string: ";
		getline(cin, input);


		bool lastWasAlpha = false;
		bool lastWasNot = false;
		bool lastWasConnector = false;
		bool lastWasConnector2 = false;
		bool isValidWff = true;

		for (unsigned int i = 0; i < input.length(); i++)
		{


			//bool wasLastALetterOrNotSymbol = false;
			char c = input[i];
			if (c == ' ')
			{
				continue;
			}
			if (c == '!' || c == 'V' || c == 'v' || c == '^' || c == '-' || c == '>')
			{
				if (c == '-') {
					char check1 = input[i + 1];
					if (check1 != '>')
					{
						isValidWff = false;
						break;
					}
					if (!lastWasAlpha)
					{
						isValidWff = false;
						break;
					}
					lastWasConnector = true;
					lastWasConnector2 = true;
				}
				else if (c != '!' && c != '-') {
					if (!lastWasAlpha && lastWasConnector2 == false)
					{
						isValidWff = false;
						break;
					}
					if (c == '>')
					{
						char check2 = input[i - 1];
						if (check2 != '-')
						{
							isValidWff = false;
							break;
						}
					}
					lastWasConnector = true;
				}
				else
				{
					if (lastWasAlpha)
					{
						isValidWff = false;
						break;
					}
					lastWasNot = true;
				}
				lastWasAlpha = false;
			}
			else if (isalpha(c))
			{
				if (lastWasAlpha)
				{
					isValidWff = false;
					break;
				}
				lastWasAlpha = true;
				continue;
			}
			else
			{
				isValidWff = false;
				break;
			}
		}
		cout << (isValidWff ? "That is a WFF" : "NOT Valid WFF") << endl;
		cout << endl << "Rerun the program? (Y/N)" << endl;
		getline(cin, choice);
		cout << endl;
		//system("cls");
	} while (choice == "Y" || choice == "y");
	return 0;
}