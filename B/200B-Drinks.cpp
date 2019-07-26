#include <iostream>
#include <iomanip>

int main()
{
    // Get the number of drinks in the fridge
    int NumberOfDrinks;
    std::cin >> NumberOfDrinks;

    // A sum value to hold the total percentage of orange juice in all drinks
    int TotalPercentages = 0;
    // loop and get the input of orange juice percentages then sum it
    int TempInput;
    for(int i = 0; i < NumberOfDrinks; ++i)
    {
        std::cin >> TempInput;
        // the total sum of orange juice percentages
        TotalPercentages += TempInput;
    }
    /*  To get the percentage of orange juice in the cocktail,
        we can just divide the sum of percentages of all drinks by the number of them
        since the proportion of each drink in the cocktail is the same so
        the percentage will be the same as well.
    */
    float OrangeJuiceVolumeFraction = TotalPercentages / (float) NumberOfDrinks; // don't forget the float division

    // set the number of decimal points to be fixed with 12 places as the answers are formatted that way
    std::cout << std::fixed;
    std::cout << std::setprecision(12);
    // print the answer
    std::cout << OrangeJuiceVolumeFraction;

    return 0;
}