#ifndef __COMPLEX__
#define __COMPLEX__
#include <iostream>

namespace xxx{
    class complex
    {
        public:
        complex(double r ,double i)
        : re(r),im(i)
        {}
        complex()
        :re(0),im(0)
        {}
        double real() const {return re;}
        double image() const {return im;}
        complex& operator += (const complex&);
        private:
        double re,im; 
        friend complex& __doapl(complex* ,const complex&);

            
    };
}
#endif