// KILOGRAMS_PER_POUND = 0.45359237
// METERS_PER_INCH = 0.0254
// BMI calculation = weight in kilograms divided by the square of height in meters

#include <iostream>

using namespace std;

int main() {

double weight, height;
// Testing values
// weight = 130;
// height = 75;
cout << "Enter weight in pounds: ";
cin >> weight;

cout << "Enter height in inches: ";
cin >> height;

double weightInKilograms, heightInMeters;


// convert weight from pounds to kilograms
weightInKilograms = 0.45359237 * weight;
// Convert height from inches to meters
heightInMeters = 0.0254 * height;

// Calculate BMI;
double BMI = weightInKilograms / (heightInMeters * heightInMeters);


cout << "BMI = "<< BMI << endl;

// below 16 Seriously underweight
// 16-18    Underweight
// 18-24    Normal weight
// 24-29    Overweight
// 29-35    Seriously overweight
// over 35  Gravely overweight

if (BMI < 16)
cout << "Seriously underweight" << endl << endl;
else if (BMI < 18)
cout << "Underweight" << endl << endl;
else if (BMI < 24)
cout << "Normal weight" << endl << endl;
else if (BMI < 29)
cout << "Overweight" << endl << endl;
else if (BMI < 35)
cout << "Seriously overweight" << endl << endl;
else 
cout << "Gravely overweight" << endl << endl;

return 0;

}