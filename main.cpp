#include "vector.h"
#include <iostream>
using namespace std;
int main(void)
{
    double x,y,z;
    vector v;
    while(1)
    {
        cout<< "enter x: "<<endl;
        cout<< "enter y: "<<endl;
        cout<< "enter z: "<<endl;
        cin >> x;
        cin >> y;
        cin >> z;

        if(x==0 && y==0 && z==0)
            break;
        else
        {
            v.setx(x).sety(y).setz(z);
            //geriye vector& d�nd�rmesinin sebebi sadece kullan�m kolayl��� i�in
            cout << "magnitude:  "<<v.magnitude() << endl
                 << "azimuth:   "<<v.azimuth() << endl
                 <<"elevation:  "<<v.elevation()<<endl;
            cout<<endl;
        }

    }


    return 0;
}
