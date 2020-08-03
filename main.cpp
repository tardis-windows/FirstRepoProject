#include <iostream> 

using namespace std; 


// implement function here (outside of main always)
void printMsg()
{
    cout << "hello" << endl; 
}

int totalSum(int x, int y) 
{
    int total = x + y; 
    return total; 
}

int main
{


    printMsg(); // calling the function 

    totalSum(7,12); 

    return 0; 
}
