#include "myFunk.h"

/*
	��� ������� ������ ���������� ����� ���������� ������,
	���� ��� ����� �� ����� �������� ����������� ��������� forbidden_length.
	� ��������� ������ ��� ������ ����������� ���������� bad_length.
*/
unsigned int function(const std::string str, const unsigned int forbidden_length)
{
    unsigned int len = str.length();
    //if (len == forbidden_length) throw "�� ����� ����� ��������� �����! ";
    if (len == forbidden_length) throw std::runtime_error("�� ����� ����� ��������� �����! ");
	return len;
}

/* 
    ����� ����������� � ������������ ���� ������
    ���� �� ����� ������� ������ ������.
    � ������ ������, ������ unsigned int.
    ��� ������ �����, ������� � ������� cin
    � ����� �������� ������ ������
*/
unsigned int userInput(const std::string userText)
{
    int uData = 0;
    bool err = true;

    do
    {
        std::cout << userText; std::cin >> uData;

        if (err = std::cin.fail()) std::cin.clear(); // ������ �����
        int ch; // ����� � ������� ������ ��������� ��������
        while ((ch = std::cin.get()) != '\n' && ch != EOF);
    } while (err || uData <= 0);

    return static_cast<unsigned int>(uData);
}
