#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;


class Date
{
    public:
        Date();
        virtual ~Date();
        Date(int,int,int);
        friend ostream& operator<<(ostream&,Date&);
        bool operator==(Date&);

    protected:
        int J,M,A;
};

ostream& operator<<(ostream&,Date&);


#endif // DATE_H
