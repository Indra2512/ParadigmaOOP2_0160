#include <iostream>
using namespace std;

class baseClass final
{
    public:
        virtual void perkenalan()
        {
            cout << "Hallo saya Fuction dari base class";
        }
};

class drivedClass : public baseClass
{
    public:
        void perkenalan()
    {
        cout << "Hallo saya Fuction dari derived Class";
    }
};