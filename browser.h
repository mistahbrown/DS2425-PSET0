#include <string>
using namespace std;

// YOUR CODE HERE

class BrowserHistory {
public:
    // Initialize the object with the homepage of the browser
    BrowserHistory(string homepage) 
    {
        // YOUR CODE HERE
    }
    
    // Visits url from the current page and clears all forward history
    void visit(string url) 
    {
        // YOUR CODE HERE
    }
    
    // Move steps back in history. If you can only return x steps in the
    // history and steps > x, you will return only x steps. Return the 
    // current url after moving back in history at most steps times.
    string back(int steps) 
    {
        // YOUR CODE HERE
    }
    
    // Move steps forward in history. If you can only forward x steps in 
    // the history and steps > x, you will forward only x steps. Return 
    // the current url after forwarding in history at most steps.
    string forward(int steps) 
    {
        // YOUR CODE HERE
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */