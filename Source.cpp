#include <iostream>
using namespace std;

string ToUpper(string myString)
{
    string upperString;
    for (auto c : myString) upperString += toupper(c);
    return upperString;
}

string ToLower(string myString)
{
    string lowerString;
    for (auto c : myString) lowerString += tolower(c);
    return lowerString;
}

int main()
{
    string yesNo;
    string anotherOne;
    do
    {
        cout << "Which operation do you want +, -, *, / ?" << endl;
        string operation;
        cin >> operation;
        while (cin.fail() or operation != "+" and operation != "-" and operation != "*" and operation != "/")
        {
            cin.clear();
            cin.ignore();
            cout << "Sorry, please enter a valid operation." << endl;
            cout << "Which operation do you want +, -, *, / ?" << endl;
            cin >> operation;
        }

        if (operation == "+")
        {
            double userNum1, userNum2;
            cout << "Enter first number: " << endl;
            cin >> userNum1;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Sorry, please enter a valid number." << endl;
                cout << "Enter first number: " << endl;
                cin >> userNum1;
            }
            cout << "Enter second number: " << endl;;
            cin >> userNum2;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Sorry, please enter a valid number." << endl;
                cout << "Enter second number: " << endl;
                cin >> userNum2;
            }

            double userTotal = userNum1 + userNum2;
            cout << userNum1 << " + " << userNum2 << " = " << userTotal << endl;

            cout << "Do you want to continue the calculation? (y/n)" << endl;
            cin >> anotherOne;

            anotherOne = ToLower(anotherOne);

            while (cin.fail() or anotherOne != "y" && anotherOne != "n")
            {
                cin.clear();
                cin.ignore();
                cout << "Sorry, you must answer 'y' or 'n'." << endl;
                cout << "Do you want to continue the calculation? (y/n)" << endl;
                cin >> anotherOne;
                anotherOne = ToLower(anotherOne);
            }
            while (anotherOne == "y")
            {

                double anotherNumber;
                cout << "Enter another number: " << endl;
                cin >> anotherNumber;
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Sorry, please enter a valid number." << endl;
                    cout << "Enter another number: " << endl;
                    cin >> anotherNumber;
                }

                cout << "Which operation do you want +, -, *, / ?" << endl;
                string operation;
                cin >> operation;
                while (cin.fail() or operation != "+" and operation != "-" and operation != "*" and operation != "/")
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Sorry, please enter a valid operation." << endl;
                    cout << "Which operation do you want +, -, *, / ?" << endl;
                    cin >> operation;
                }
                if (operation == "+")
                {

                    double userTotalFinal = userTotal + anotherNumber;
                    cout << userTotal << " + " << anotherNumber << " = " << userTotalFinal << endl;
                    userTotal = userTotalFinal;
                }
                if (operation == "-")
                {

                    double userTotalFinal = userTotal - anotherNumber;
                    cout << userTotal << " - " << anotherNumber << " = " << userTotalFinal << endl;
                    userTotal = userTotalFinal;
                }
                if (operation == "*")
                {

                    double userTotalFinal = userTotal * anotherNumber;
                    cout << userTotal << " * " << anotherNumber << " = " << userTotalFinal << endl;
                    userTotal = userTotalFinal;
                }
                if (operation == "/")
                {

                    double userTotalFinal = userTotal / anotherNumber;
                    cout << userTotal << " / " << anotherNumber << " = " << userTotalFinal << endl;
                    userTotal = userTotalFinal;
                }
                cout << "Do you want to continue the calculation? (y/n)" << endl;
                cin >> anotherOne;

                anotherOne = ToLower(anotherOne);

                while (cin.fail() or anotherOne != "y" && anotherOne != "n")
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Sorry, you must answer 'y' or 'n'." << endl;
                    cout << "Do you want to continue the calculation? (y/n)" << endl;
                    cin >> anotherOne;
                    anotherOne = ToLower(anotherOne);
                }


            }


            cout << "Do you want another go (y/n): ";
            cin >> yesNo;
            while (cin.fail() or yesNo != "y" && yesNo != "n")
            {
                cin.clear();
                cin.ignore();
                cout << "Sorry, you must answer 'y' or 'n'." << endl;
                cout << "Do you want another go? (y/n)" << endl;
                cin >> yesNo;
                yesNo = ToLower(yesNo);
            }
        }

        if (operation == "-")
        {
            double userNum1, userNum2;
            cout << "Enter first number: ";
            cin >> userNum1;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Sorry, please enter a valid number." << endl;
                cout << "Enter first number: " << endl;
                cin >> userNum1;
            }
            cout << "Enter second number: ";
            cin >> userNum2;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Sorry, please enter a valid number." << endl;
                cout << "Enter second number: " << endl;
                cin >> userNum2;
            }

            double userTotal = userNum1 - userNum2;
            cout << userNum1 << " - " << userNum2 << " = " << userTotal << endl;

            cout << "Do you want to continue the calculation? (y/n)" << endl;
            cin >> anotherOne;

            anotherOne = ToLower(anotherOne);

            while (cin.fail() or anotherOne != "y" && anotherOne != "n")
            {
                cin.clear();
                cin.ignore();
                cout << "Sorry, you must answer 'y' or 'n'." << endl;
                cout << "Do you want to continue the calculation? (y/n)" << endl;
                cin >> anotherOne;
                anotherOne = ToLower(anotherOne);
            }
            while (anotherOne == "y")
            {

                double anotherNumber;
                cout << "Enter another number: " << endl;
                cin >> anotherNumber;
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Sorry, please enter a valid number." << endl;
                    cout << "Enter another number: " << endl;
                    cin >> anotherNumber;
                }

                cout << "Which operation do you want +, -, *, / ?" << endl;
                string operation;
                cin >> operation;
                while (cin.fail() or operation != "+" and operation != "-" and operation != "*" and operation != "/")
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Sorry, please enter a valid operation." << endl;
                    cout << "Which operation do you want +, -, *, / ?" << endl;
                    cin >> operation;
                }
                if (operation == "+")
                {

                    double userTotalFinal = userTotal + anotherNumber;
                    cout << userTotal << " + " << anotherNumber << " = " << userTotalFinal << endl;
                    userTotal = userTotalFinal;
                }
                if (operation == "-")
                {

                    double userTotalFinal = userTotal - anotherNumber;
                    cout << userTotal << " - " << anotherNumber << " = " << userTotalFinal << endl;
                    userTotal = userTotalFinal;
                }
                if (operation == "*")
                {

                    double userTotalFinal = userTotal * anotherNumber;
                    cout << userTotal << " * " << anotherNumber << " = " << userTotalFinal << endl;
                    userTotal = userTotalFinal;
                }
                if (operation == "/")
                {

                    double userTotalFinal = userTotal / anotherNumber;
                    cout << userTotal << " / " << anotherNumber << " = " << userTotalFinal << endl;
                    userTotal = userTotalFinal;
                }

                cout << "Do you want to continue the calculation? (y/n)" << endl;
                cin >> anotherOne;

                anotherOne = ToLower(anotherOne);

                while (cin.fail() or anotherOne != "y" && anotherOne != "n")
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Sorry, you must answer 'y' or 'n'." << endl;
                    cout << "Do you want to continue the calculation? (y/n)" << endl;
                    cin >> anotherOne;
                    anotherOne = ToLower(anotherOne);
                }

                cout << "Do you want another go (y/n): ";
                cin >> yesNo;
                while (cin.fail() or yesNo != "y" && yesNo != "n")
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Sorry, you must answer 'y' or 'n'." << endl;
                    cout << "Do you want another go? (y/n)" << endl;
                    cin >> yesNo;
                    yesNo = ToLower(yesNo);
                }
            }
        }

        if (operation == "*")
        {
                double userNum1, userNum2;
                cout << "Enter first number: ";
                cin >> userNum1;
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Sorry, please enter a valid number." << endl;
                    cout << "Enter first number: ";
                    cin >> userNum1;

                }
                cout << "Enter second number: ";
                cin >> userNum2;
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Sorry, please enter a valid number." << endl;
                    cout << "Enter second number: ";
                    cin >> userNum2;
                }

                double userTotal = userNum1 * userNum2;
                cout << userNum1 << " * " << userNum2 << " = " << userTotal << endl;

                cout << "Do you want to continue the calculation? (y/n)" << endl;
                cin >> anotherOne;

                anotherOne = ToLower(anotherOne);

                while (cin.fail() or anotherOne != "y" && anotherOne != "n")
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Sorry, you must answer 'y' or 'n'." << endl;
                    cout << "Do you want to continue the calculation? (y/n)" << endl;
                    cin >> anotherOne;
                    anotherOne = ToLower(anotherOne);
                }
                while (anotherOne == "y")
                {

                    double anotherNumber;
                    cout << "Enter another number: " << endl;
                    cin >> anotherNumber;
                    while (cin.fail())
                    {
                        cin.clear();
                        cin.ignore();
                        cout << "Sorry, please enter a valid number." << endl;
                        cout << "Enter another number: " << endl;
                        cin >> anotherNumber;
                    }

                    cout << "Which operation do you want +, -, *, / ?" << endl;
                    string operation;
                    cin >> operation;
                    while (cin.fail() or operation != "+" and operation != "-" and operation != "*" and operation != "/")
                    {
                        cin.clear();
                        cin.ignore();
                        cout << "Sorry, please enter a valid operation." << endl;
                        cout << "Which operation do you want +, -, *, / ?" << endl;
                        cin >> operation;
                    }
                    if (operation == "+")
                    {

                        double userTotalFinal = userTotal + anotherNumber;
                        cout << userTotal << " + " << anotherNumber << " = " << userTotalFinal << endl;
                        userTotal = userTotalFinal;
                    }
                    if (operation == "-")
                    {

                        double userTotalFinal = userTotal - anotherNumber;
                        cout << userTotal << " - " << anotherNumber << " = " << userTotalFinal << endl;
                        userTotal = userTotalFinal;
                    }
                    if (operation == "*")
                    {

                        double userTotalFinal = userTotal * anotherNumber;
                        cout << userTotal << " * " << anotherNumber << " = " << userTotalFinal << endl;
                        userTotal = userTotalFinal;
                    }
                    if (operation == "/")
                    {

                        double userTotalFinal = userTotal / anotherNumber;
                        cout << userTotal << " / " << anotherNumber << " = " << userTotalFinal << endl;
                        userTotal = userTotalFinal;
                    }

                    cout << "Do you want to continue the calculation? (y/n)" << endl;
                    cin >> anotherOne;

                    anotherOne = ToLower(anotherOne);

                    while (cin.fail() or anotherOne != "y" && anotherOne != "n")
                    {
                        cin.clear();
                        cin.ignore();
                        cout << "Sorry, you must answer 'y' or 'n'." << endl;
                        cout << "Do you want to continue the calculation? (y/n)" << endl;
                        cin >> anotherOne;
                        anotherOne = ToLower(anotherOne);
                    }


                    cout << "Do you want another go (y/n): ";
                    cin >> yesNo;
                    while (cin.fail() or yesNo != "y" && yesNo != "n")
                    {
                        cin.clear();
                        cin.ignore();
                        cout << "Sorry, you must answer 'y' or 'n'." << endl;
                        cout << "Do you want another go? (y/n)" << endl;
                        cin >> yesNo;
                        yesNo = ToLower(yesNo);
                    }
                }
        }

        if (operation == "/")
        {
                    double userNum1, userNum2;
                    cout << "Enter first number: ";
                    cin >> userNum1;
                    while (cin.fail())
                    {
                        cin.clear();
                        cin.ignore();
                        cout << "Sorry, please enter a valid number." << endl;
                        cout << "Enter first number: ";
                        cin >> userNum1;
                    }
                    cout << "Enter second number: ";
                    cin >> userNum2;
                    while (cin.fail())
                    {
                        cin.clear();
                        cin.ignore();
                        cout << "Sorry, please enter a valid number." << endl;
                        cout << "Enter second number: ";
                        cin >> userNum2;
                    }

                    double userTotal = userNum1 / userNum2;
                    cout << userNum1 << " / " << userNum2 << " = " << userTotal << endl;

                    cout << "Do you want to continue the calculation? (y/n)" << endl;
                    cin >> anotherOne;

                    anotherOne = ToLower(anotherOne);

                    while (cin.fail() or anotherOne != "y" && anotherOne != "n")
                    {
                        cin.clear();
                        cin.ignore();
                        cout << "Sorry, you must answer 'y' or 'n'." << endl;
                        cout << "Do you want to continue the calculation? (y/n)" << endl;
                        cin >> anotherOne;
                        anotherOne = ToLower(anotherOne);
                    }
                    while (anotherOne == "y")
                    {

                        double anotherNumber;
                        cout << "Enter another number: " << endl;
                        cin >> anotherNumber;
                        while (cin.fail())
                        {
                            cin.clear();
                            cin.ignore();
                            cout << "Sorry, please enter a valid number." << endl;
                            cout << "Enter another number: " << endl;
                            cin >> anotherNumber;
                        }

                        cout << "Which operation do you want +, -, *, / ?" << endl;
                        string operation;
                        cin >> operation;
                        while (cin.fail() or operation != "+" and operation != "-" and operation != "*" and operation != "/")
                        {
                            cin.clear();
                            cin.ignore();
                            cout << "Sorry, please enter a valid operation." << endl;
                            cout << "Which operation do you want +, -, *, / ?" << endl;
                            cin >> operation;
                        }
                        if (operation == "+")
                        {

                            double userTotalFinal = userTotal + anotherNumber;
                            cout << userTotal << " + " << anotherNumber << " = " << userTotalFinal << endl;
                            userTotal = userTotalFinal;
                        }
                        if (operation == "-")
                        {

                            double userTotalFinal = userTotal - anotherNumber;
                            cout << userTotal << " - " << anotherNumber << " = " << userTotalFinal << endl;
                            userTotal = userTotalFinal;
                        }
                        if (operation == "*")
                        {

                            double userTotalFinal = userTotal * anotherNumber;
                            cout << userTotal << " * " << anotherNumber << " = " << userTotalFinal << endl;
                            userTotal = userTotalFinal;
                        }
                        if (operation == "/")
                        {

                            double userTotalFinal = userTotal / anotherNumber;
                            cout << userTotal << " / " << anotherNumber << " = " << userTotalFinal << endl;
                            userTotal = userTotalFinal;
                        }

                        cout << "Do you want to continue the calculation? (y/n)" << endl;
                        cin >> anotherOne;

                        anotherOne = ToLower(anotherOne);

                        while (cin.fail() or anotherOne != "y" && anotherOne != "n")
                        {
                            cin.clear();
                            cin.ignore();
                            cout << "Sorry, you must answer 'y' or 'n'." << endl;
                            cout << "Do you want to continue the calculation? (y/n)" << endl;
                            cin >> anotherOne;
                            anotherOne = ToLower(anotherOne);
                        }

                        cout << "Do you want another go (y/n): ";
                        cin >> yesNo;
                        while (cin.fail() or yesNo != "y" && yesNo != "n")
                        {
                            cin.clear();
                            cin.ignore();
                            cout << "Sorry, you must answer 'y' or 'n'." << endl;
                            cout << "Do you want another go? (y/n)" << endl;
                            cin >> yesNo;
                            yesNo = ToLower(yesNo);
                        }
                    }

        }
            
        

    } while (yesNo == "y");
}