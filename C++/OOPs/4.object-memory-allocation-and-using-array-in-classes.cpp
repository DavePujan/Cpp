/*
in this we are gonna declare an array and a counter in the private in class and then, we are creating a three function named initcounter , display, set.

- by initcounter we will set counter to zero.
- by display we will display all the itemPrice[i] from i to counter.
- by setcounter we will set the price of our item by cin >> item[counter].
 */
#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 1; }
    void displayPrice(void);
    void setPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item " << counter << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is" << itemPrice[i];
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice(); 
    return 0;
}