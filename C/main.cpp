#include <iostream>
#include <string.h>
#include "sales.h"

using namespace std;


int main(){
    sales books;
    string name;
    double price;
    cin >> books.name >> books.ibn >> books.price;
    books.price = 10;
    cout << books.name << books.ibn << books.price << endl;
    return 0;
}