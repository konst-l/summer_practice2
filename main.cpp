#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()  
{
     setlocale(LC_ALL, "rus");
     regex reg(R"(([a-zA-Z]+(['-][a-zA-Z]+)|[a-zA-Z]+|\"(([a-zA-Z]+(['-][a-zA-Z]+)|[a-zA-Z]+\s*)*)\")");

}