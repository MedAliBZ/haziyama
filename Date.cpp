#include "Date.h"

using namespace std;

Date::Date()
{
    //ctor
}

Date::~Date()
{
    //dtor
}


Date::Date(int dd,int mm,int aa){
    J=dd;
    M=mm;
    A=aa;
}

ostream& operator<<(ostream& ou,Date& d){

    ou << d.J << "/" << d.M << "/" << d.A << endl;
    return ou;
}

bool Date::operator==(Date& d){
    if(A==d.A && J==d.J && M==d.M)
        return true;
    return false;
}
