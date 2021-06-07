#include <iostream>
#include <string>

int main(int argc, char *argv[])
{

    std::string str1 = "Hello world!";
    std::string str2 = "hello world";
    std::string str3 = "alexandr";

    std::cout << "----string compare----" << std::endl;
    std::cout << "строка 1 : " << str1 << std::endl;
    std::cout << "строка 2 : " << str2 << std::endl;
    std::cout << str1.compare(str2) << std::endl;
    
    std::cout << "\n----replace part of string----" << std::endl;
    std::cout << "Оригинал: " << str1 << std::endl;
    std::cout << str1.replace(str1.find("world"), str3.size(), str3) << std::endl;

    std::cout << "\n----string concatenation----" << std::endl;
    std::cout << "Оригинал: " << str1 << "; " << str2 << std::endl;
    std::cout << str1 + " " + str2 << std::endl;
    std::cout << str1.append(" ").append(str2) << std::endl;

    std::cout << "\n----substring----" << std::endl;
    std::cout << "Оригинал: " << str1 << std::endl;
    str1 = str1.substr(0, 13);
    std::cout << str1 << std::endl;

    std::cout << "\n----insert----" << std::endl;
    std::cout << "Оригинал: " << str1 << std::endl;
    std::cout << str1.insert(6, "world ") << std::endl;
}
