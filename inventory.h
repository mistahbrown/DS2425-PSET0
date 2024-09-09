#include <vector>
#include <iostream>
using namespace std;


// item - a structure to represent data about an inventory item.
// Should include the part number, a description of the part,
// and a quantity
struct item
{
    // YOUR CODE HERE
};

// find() - find the item in the inventory array. Inventory list
// should be sorted by part number, so use binary search!
// Return its index if found, -1 otherwise.
item find(const vector<item> &inventory, item &i)
{
    // YOUR CODE HERE
}

// show() - displays inventory information for the given part number.
void show(const vector<item> &inventory, item &i)
{
    // YOUR CODE HERE
}

// add() - adds the new inventory item with the specified part number
// to the inventory list in a sorted manner. Checks whether item
// is already in the list. If in list, verify that descriptions are the
// same before adding more. Output an appropriate message for each scenario.
void add(const vector<item> &inventory, item &i)
{
    // YOUR CODE HERE
}

// remove() - removes qty items from the inventory list, if it
// is there. If qty is more than there are, subtract all of them. Output an 
// appropriate message for each scenario.
void remove(const vector<item> &inventory, item &i, int qty)
{
    // YOUR CODE HERE
}

// list() - displays the inventory list
void list(const vector<item> &inventory)
{
    // YOUR CODE HERE
}