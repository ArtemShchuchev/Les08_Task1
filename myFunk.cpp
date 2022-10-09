#include "myFunk.h"

/*
	Эта функция должна возвращать длину переданной строки,
	если эта длина не равна значению переданного параметра forbidden_length.
	В противном случае она должна выбрасывать исключение bad_length.
*/
unsigned int function(const std::string str, const unsigned int forbidden_length)
{
    unsigned int len = str.length();
    //if (len == forbidden_length) throw "Вы ввели слово запретной длины! ";
    if (len == forbidden_length) throw std::runtime_error("Вы ввели слово запретной длины! ");
	return len;
}

/* 
    Будет запрашивать у пользователя ввод данных
    пока не будут введены верные данные.
    В случае успеха, вернет unsigned int.
    При ошибке ввода, сбросит и очистит cin
    и снова попросит ввести данные
*/
unsigned int userInput(const std::string userText)
{
    int uData = 0;
    bool err = true;

    do
    {
        std::cout << userText; std::cin >> uData;

        if (err = std::cin.fail()) std::cin.clear(); // ошибка ввода
        int ch; // поиск и очистка лишних введенных символов
        while ((ch = std::cin.get()) != '\n' && ch != EOF);
    } while (err || uData <= 0);

    return static_cast<unsigned int>(uData);
}
