#include<iostream>
//using namespace std;    ///inbuilt namespace

namespace Marvellous
{
    class Demo
    {
        //logic
    };
}

namespace PPA
{
    class Hello
    {

    };
}
using namespace Marvellous;
int main()
{
    std::cout<<"inside main";
    Marvellous::Demo dobj;
    PPA::Hello hobj;

    return 0;
}