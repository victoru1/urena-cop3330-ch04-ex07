/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Victor Urena
 */

#include "std_lib_facilities.h"

void singleDigCalc(int valOne, int valTwo, String op)
{
    double calculation;

    if (op == "+")
    {
        calculation = valOne + valTwo;
        printf("The sum of %d and %d is %.0f\n", valOne, valTwo, calculation);
    }
    else if (op == "-")
    {
        calculation = valOne - valTwo;
        printf("The difference of %d and %d is %.0f\n", valOne, valTwo, calculation);
    }
    else if (op == "*")
    {
        calculation = valOne * valTwo;
        printf("The product of %d and %d is %.0f\n", valOne, valTwo, calculation);
    }
    else if (op == "/")
    {
        calculation = (double)valOne / valTwo;
        printf("The quotient of %d and %d is %.2f\n", valOne, valTwo, calculation);
    }
    else
    {
        cout << op << " is not a valid operation for this calculator\n";
        exit(1);
    }
}

int checkNumber(String num)
{
    std::for_each(num.begin(), num.end(), [](char & c)
    {
    c = ::tolower(c);
    });

    if (num == "one" || num == "1")
    {
        return 1;
    }
    else if (num == "two" || num == "2")
    {
        return 2;
    }
    else if (num == "three" || num == "3")
    {
        return 3;
    }
    else if (num == "four" || num == "4")
    {
        return 4;
    }
    else if (num == "five" || num == "5")
    {
        return 5;
    }
    else if (num == "six" || num == "6")
    {
        return 6;
    }
    else if (num == "seven" || num == "7")
    {
        return 7;
    }
    else if (num == "eight" || num == "8")
    {
        return 8;
    }
    else if (num == "nine" || num == "9")
    {
        return 9;
    }
    else if (num == "zero" || num == "0")
    {
        return 0;
    }
    else
    {
        cout << "Error: " + num + " is not a single digit numerical value.";
        exit(1);
    }
    
}

int main()
{
    String first, second, operation;
    int firstNum, secondNum;

    cout << "Welcome to the Single Digit Calculator\n";
    cout << "Please enter your first single digit number: ";
    cin >> first;
    firstNum = checkNumber(first);

    cout << "Please enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Please enter your second single digit number: ";
    cin >> second;
    secondNum = checkNumber(second);

    singleDigCalc(firstNum, secondNum, operation);
}