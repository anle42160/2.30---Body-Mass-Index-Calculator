/* 2.30.) We introduced the body mass index(BMI) calculator in Exercise 1.9.The formulas for calculating BMI are BMI = weight In Pounds × 703 height In Inches × height In Inches or BMI = weight In Kilograms height In Meters × height In Meters Create a BMI calculator application that reads the user’s weight in pounds and height in inches(or , if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays the user’s body mass index.Also, the application should display the following information from the Department of Health and Human Services / National Institutes of Health so the user can evaluate his / her BMI : BMI VALUES Underweight : less than 18.5 Normal : between 18.5 and 24.9
          Overweight:  between 25 and 29.9
          Obese : 30 or greater
          [Note:In this chapter, you learned to use the int type to represent whole numbers.The BMI calculations when done with int values will both produce whole - number results.In Chapter 4 you’ll learn to use the double type to represent numbers with decimal points.When the BMI calculations are performed with doubles, they’ll each produce numbers with decimal points—these are called “floating - point” numbers.]
          Programmer: Anna Le */

#include <iostream>
using namespace std;

int main()
{
    //Declaring variables
    int weight;
    int height;

    //Assigning values to variables
    cout << "Weight in Pounds: ";
    cin >> weight;
    cout << "Height in Inches: ";
    cin >> height;
    cout << "BMI: " << (weight * 703) / (height * height) << endl;

    //Displaying BMI Values
    cout << "BMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal: between 18.5 and 24.9" << endl;
    cout << "Overweight: between 25 and 29.9" << endl;
    cout << "Obese: 30 or greater" << endl;

    //Verification that the program ran successfully
    return 0;
}