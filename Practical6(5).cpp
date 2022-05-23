#include <iostream>
using namespace std;

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    Inventory()     // declare the Inventory object using the default constructor
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
        
    }
    Inventory(int newItemNumber, int newQuantity, double newCost) 
    {
        itemNumber = newItemNumber;
        quantity = newQuantity;
        cost = newCost;
        setTotalCost(quantity, cost);
    }
    
    void setItemNumber(int)   
    {
        itemNumber = itemNumber;
    }
    void setQuantity(int)	
    {
        quantity = quantity;
    }
    void setCost(double)  
    {
        cost = cost;
    }
    void setTotalCost(int, double)
    {
        totalCost = quantity * cost;
    }
    
    int getItemNumber()
    {
        return itemNumber;
    }
    int getQuantity()
    {
        return quantity;
    }
    double getCost()
    {
        return cost;
    }
    double getTotalCost()
    {
        return totalCost;
    }
};

int main()
{
    int itemNumber;  // declare variables for inventory number, quantity, cost
    int quantity;
    double cost;
    double totalCost;
    
    Inventory();       // declare the Inventory object using the default constructor
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
    }
        cout << "Enter item number: ";	// collect and validate item number
        cin >> itemNumber;
        while (itemNumber < 0)
        {
            cout << "Error. Please enter a positive value for the item number: ";
            cin >> itemNumber;
        }
        cout << "Enter item quantity: "; // collect and validate quantity
        cin >> quantity;
        while (quantity < 0)
        {
            cout << "Error. Please enter a positive value for the quantity: ";
            cin >> quantity;
        }
        cout << "Enter item cost: "; // collect and validate cost
        cin >> cost;
        while (cost < 0)
        {
            cout << "Error. Please enter a positive value for the cost: ";
            cin >> cost;
        }
        
        Inventory information(itemNumber, quantity, cost);
        
        totalCost = information.getTotalCost();
        itemNumber = information.getItemNumber();   // change the inventory number using the setItemNumber() member function
        quantity = information.getQuantity();    // change the quantity using the setQuantity() member function
        cost = information.getCost();  // change the cost using the setCost() member function
        
        cout<< "Inventory Summary\n";   // display the contents of Inventory item using getItemNumber(), getQuantity(), and getCost()
        cout << "=================\n";
        cout << "Item number: " << itemNumber << endl;
        cout << "Item quantity: " << quantity << endl;
        cout << "Item cost: " << cost << endl;
        cout << "-----------------\n";
        cout << "Total Cost: " << totalCost << endl;  // display the total cost using getTotalCost() member function (which returns cost * quantity)
        
        return 0;
    }

// OUTPUT  //

Enter item number: 2
Enter item quantity: 6
Enter item cost: 8
Inventory Summary
=================
Item number: 2
Item quantity: 6
Item cost: 8
-----------------
Total Cost: 48
