// Name: Jason Le
// This program calculates and displays business expenses.

#include <iostream>
#include <string>
#include <iomanip>
int main()
{

  double days, hotel, meal;
  // Welcome
  std::cout << "Welcome to the Business Trip Tracker!\n";

  // Skips line for spacing.
  std::cout << '\n';

  // Asks location of trip.
  std::cout << "What is the business trip location? ";
  std::string location;
  std::cin >> location;

  // Asks number of days the trip will take.
  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  // Asks cost of hotel.
  std::cout << "What is the total hotel expense? $";
  std::cin >> hotel;

  // Asks cost of meal.
  std::cout << "What is the total meal expense? $";
  std::cin >> meal;

  // Calculate total cost of hotel and meal.
  double total = hotel + meal;

  // Skips line for spacing.
  std::cout << '\n';

  // Displays trip information.
  std::cout << "Location" << std::setw(8) << "Days" << std::setw(12) << "Hotel" << std::setw(12) << "Meal" << std::setw(12) << "Total\n";
  std::cout << location << std::setw(12) << days << std::setw(12) << "$" << hotel << std::setw(11) << "$" << meal << std::setw(9) << "$" << total << '\n';

return 0;
}
