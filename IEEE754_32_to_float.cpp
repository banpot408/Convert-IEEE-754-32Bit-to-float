/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

https://www.onlinegdb.com/online_c++_compiler

*******************************************************************************/

#include <iostream>

using namespace std;

unsigned int lsb_modbus_add_3020 = 31911;
unsigned int msb_modbus_add_3021 = 17351;
uint32_t volt_int32 = 0;
float volt_float = 0;

int main()
{
    volt_int32 = lsb_modbus_add_3020 |= msb_modbus_add_3021<<16;
    volt_float = *(float*)&volt_int32;
    cout<<"\nVolt = ";
    cout << volt_float;
    return 0;
}
