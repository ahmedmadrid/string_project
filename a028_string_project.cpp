#include <iostream>
#include "clsString.h"
#include<vector>
using namespace std;


int main()
{
    clsString name("Ahmed Basiony Tag Eldin Ashosh");
    name.value = clsString::readString("Enter another name");
    name.printEachWord(",");
    

}
