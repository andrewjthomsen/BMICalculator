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
cout << "Seriously underweight" << endl;



return 0;

}