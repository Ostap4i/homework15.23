
#include <iostream>
#include "Stack.h"
using namespace std;

const int SIZE = 100;

int main()
{
    
        Stack stack;

        stack.push(10);
        stack.push(20);
        stack.push(30);

        std::cout << "Top element: " << stack.topElement() << endl;

        stack.pop();
        cout << "Top element after removal: " << stack.topElement() << endl;

        return 0;
    
}



