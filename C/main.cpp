#include <iostream>
#include <string.h>
#include "sales.h"

using namespace std;


int main(){
    //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
    //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
    //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
    sales books;
    string name;
    double price;
    cin >> books.name >> books.ibn >> books.price;
    books.price = 10;
    cout << books.name << books.ibn << books.price << endl;
    return 0;
}