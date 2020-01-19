#include <iostream>
#include <stack>
#include <string>
using namespace std;

int getPriority(char get)
{
	if (get == '^') return 3;
	if (get == '*' || get == '/') return 2;
	if (get == '+' || get == '-') return 1;
	return 0;
}

string InfixToPostfix(string Infix)
{
	string Postfix = "";
	stack <char> Stack;

	for (int i = 0; i < Infix.length(); i++)
	{
		char token = Infix.at(i);

		if (isalnum(token))
			Postfix += token;
		else
			if (token == '(')
				Stack.push(token);
			else
				if (token == ')')
				{
					while (!Stack.empty() && Stack.top() != '(')
					{
						Postfix += Stack.top();
						Stack.pop();
					}
					Stack.pop();
				}
				else
				{
					Postfix += ' ';
					while (!Stack.empty() && getPriority(token) <= getPriority(Stack.top()))
					{
						Postfix += Stack.top();
						Stack.pop();
					}
					Stack.push(token);
				}
	}
	while (!Stack.empty())
	{
		Postfix += Stack.top();
		Stack.pop();
	}
	return Postfix;
}


string Calculator(string Postfix)
{
	stack <string> Stack;
	float Number1, Number2, Result;

	for (int i = 0; i < Postfix.length(); i++)
	{
		char token = Postfix.at(i);
		if (token == '+' || token == '-' || token == '*' || token == '/' || token == '^')
		{
			Number1 = stoi(Stack.top());
			Stack.pop();
			Number2 = stoi(Stack.top());
			Stack.pop();
			switch (token)
			{
			case '+':
				Result = Number2 + Number1;
				break;
			case '-':
				Result = Number2 - Number1;
				break;
			case '*':
				Result = Number2 * Number1;
				break;
			case '/':
				Result = Number2 / Number1;
				break;
			case '^':
				Result = pow(Number2, Number1);
				break;
			}
			Stack.push(to_string(Result));
		}
		if (isdigit(token))
		{
			string str = "";
			while (isdigit(Postfix.at(i)))
				str += Postfix.at(i++);
			Stack.push(str);
			i--;
		}
	}
	return Stack.top();
}

int main()
{
	string Infix;
	cout << "Input a math formula: ";
	getline(cin, Infix);
	string Postfix = InfixToPostfix(Infix);
	cout << "Postfix : " << Postfix << endl;
	cout << "Result : " << Calculator(Postfix) << endl;
	system("pause");
	return 0;
}