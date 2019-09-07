// Name: Jason Le
// This program calculates and displays business expenses.

#include <iostream>
#include <string>

int main()
{

  double location, days, hotel, meal;
// Welcome
  std::cout << "Welcome to the Business Trip Tracker!\n";

// Skips line for spacing.
  std::cout << '\n';

// Asks location of trip.
  std::cout << "What is the business trip location? ";
  std::cin >> location;

// Asks number of days the trip will take.
  std::cout << "How many days will the trip take? ";
  std::cin >> days;

// Asks cost of hotel.
  std::cout << "What is the total hotel expense? ";
  std::cin >> hotel;

// Asks cost of meal.
  std::cout << "What is the total meal expense? ";
  std::cin >> meal;

// Calculate total cost of hotel and meal.
  double total = hotel + meal;

// Skips line for spacing.
  std::cout << '\n';

// Displays trip information.


return 0;
}
