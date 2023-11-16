#include <iostream>
#include <string.h>
#include "sales.h"

using namespace std;


int main(){
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