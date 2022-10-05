#include <iostream> // консоль - cout
#include "myFunk.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");   // задаём русский текст
    system("chcp 1251");            // настраиваем кодировку консоли
    std::system("cls");

    std::cout << "Задача 1. Простое исключение\n";
    std::cout << "----------------------------\n" << std::endl;

    unsigned int userLen = userInput("Введите запретную длину: ");
    std::cout << "Запретная длина = " << userLen << std::endl;

    try
    {
        unsigned int lenght = 0;
        std::string userStr;
        while (1)
        {
            std::cout << "Введите слово: "; std::cin >> userStr;
            lenght = function(userStr, userLen);
            std::cout << "Длина слова \"" << userStr << "\" равна " << lenght << std::endl;
        }
    }
    catch(const char* s)
    {
        std::cout << s << "До свидания" << std::endl;
    }

    return 0;
}
