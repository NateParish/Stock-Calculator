#include <iostream>
using namespace std;


float answer = 0;
float amount = 0;
float stockPrice = 0;
float shares = 0;
bool exitProgram = false;


// This is a simple program to calculate the number of shares that can be bought with 1/4 of the total dollars that is entered as an input.


float calculateDollars(float amount) {

    answer = amount / 4;
    return answer;

}

float calculateShares(float price) 
{

    shares = answer / price;
    return shares;

}


int main()
{

    cout << "Enter dollars available:     " << endl;
    cin >> amount;
    cout << endl;    
    answer = calculateDollars(amount);
    cout << answer <<endl;

    //endless loop to keep calculating number of shares that can be bought
    
    while (!exitProgram)
    {

        cout << "Enter Stock Price:     " << endl;
        cin >> stockPrice;
        shares = calculateShares(stockPrice);
        cout << shares << endl << endl;

    }

}

