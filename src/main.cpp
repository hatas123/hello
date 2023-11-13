#include <iostream>
#include "complex.h"

using namespace std;
int main()
{ 
    xxx::complex m_complex(2.0,1.0);
    xxx::complex n_complex(3,2);

    cout << m_complex.real() << endl;
    cout << m_complex.image() << endl;

    return 0;

}