#include <iostream>
#include <string>

//This program calculate the price of a mistery box. Box rate plus added cost for extra items
//A tier is 8 dollars for 2 items, 5 dollars for any extra item
//B tier is 12 dollars for 4 items, 4 dollars for any extra item
//C tier is 15 dollars for 6 items, 3 dollars for any extra item
int main()
{
    char selection;
    int numberOfItems = 0;
    int 
        BASIC_PRICE = 8,
        PLUS_PRICE = 12,
        PREMIUM_PRICE = 15;
    int
        BASIC_BASE_QTY = 2,
        PLUS_BASE_QTY = 4,
        PREMIUM_BASE_QTY = 6;
    int
        BASIC_EXTRA_ITEM_PRICE = 5,
        PLUS_EXTRA_ITEM_PRICE = 4,
        PREMIUM_EXTRA_ITEM_PRICE = 3;

    int totalPriceToPay = 0;

    std::cout << "Please select your package tier" << std::endl
            << "A - Basic Package" << std::endl
            << "B - Plus Package" << std::endl
            << "C - Premium Package" << std::endl
            << ">> ";
    std::cin >> selection;

    std::cout << "How many items do you want your mystery box to include?" << std::endl;
    std::cin >> numberOfItems;
    
    if (selection == 'A' || selection == 'a')
    {
        if (numberOfItems > BASIC_BASE_QTY)
        {
            totalPriceToPay = BASIC_PRICE + ((numberOfItems - BASIC_BASE_QTY) * BASIC_EXTRA_ITEM_PRICE);
        }
        else 
        {
            totalPriceToPay = BASIC_PRICE;
        }

        
    }

    if (selection == 'B' || selection == 'b')
    {
        if (numberOfItems > PLUS_BASE_QTY)
        {
            totalPriceToPay = PLUS_PRICE + ((numberOfItems - PLUS_BASE_QTY) * PLUS_EXTRA_ITEM_PRICE);
        }
        else 
        {
            totalPriceToPay = PLUS_PRICE;
        }
    }

    if (selection == 'C' || selection == 'c')
    {
        if (numberOfItems > PREMIUM_BASE_QTY)
        {
            totalPriceToPay = PREMIUM_PRICE + ((numberOfItems - PREMIUM_BASE_QTY) * PREMIUM_EXTRA_ITEM_PRICE);
        }
        else 
        {
            totalPriceToPay = PREMIUM_PRICE;
        }
    }

    std::cout << "Your total mystery box price will be $" << totalPriceToPay << std::endl; 

    return 0;
}