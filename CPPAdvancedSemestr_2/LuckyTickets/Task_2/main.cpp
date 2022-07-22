#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include "Ticket.h"
#include "Patterns.h"

using namespace std;

bool Luck(Ticket& tic, list<bool (*)(Ticket &)> patterns)
{
    for (auto func : patterns)
    {
        if (func(tic) == true)
            return true;
    }
    return false;
}

int main()
{
    list<int> luckyTics;
    list<bool (*)(Ticket &)> patterns
    {
        Sum, Upper, Downer,
        AllNumbs, Repeat
    };

    for (int i = 111111; i < 1000000; i++)
    {
        Ticket tic(i);
        if (Luck(tic, patterns))
            luckyTics.push_back(i);
    }

    ofstream os("res.txt");
    for (auto ticket : luckyTics)
        os << ticket << endl;
    os.close();
    cout << "Count of lucky tickets: " << luckyTics.size();
    
    cout << endl;
    return 0;
}