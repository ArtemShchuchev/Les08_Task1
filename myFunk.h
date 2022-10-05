#pragma once
#include <iostream> // консоль - cout

/* Эта функция возвращаtn длину переданной строки, если эта длина
   не равна значению переданного параметра forbidden_length. */
unsigned int function(const std::string str, const unsigned int forbidden_length);

// пользовательский ввод unsigned int 
unsigned int userInput(const std::string userText);
