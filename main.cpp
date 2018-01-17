#include <iostream>
#include "String.h"

int main() {

    String string1;
    std::cin>>string1;

    String string2("xyz xyz");

    String string3("abc");
    string3 = string2;

    std::cout<<string1<<string2<<string3;
    if(string1==string3){
        std::cout<<"true";
    }
    

    return 0;
}