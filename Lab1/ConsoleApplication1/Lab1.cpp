#include "pch.h"
#include <Windows.h>

using namespace System;

int main(array<System::String ^> ^args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Завдання 1
    /*
    Console::Write(L"Введіть рядок: ");
    String^ s1 = Console::ReadLine();
    s1 = s1->Insert(0, "begin ");
    s1 = s1->Insert(s1->Length, " end");
    Console::WriteLine(L"Рядок: {0} \nДовжина рядка: {1}", s1, s1->Length);
    */
    //Завдання 2
   /*
    Console::Write(L"Введіть перший рядок: ");
    String^ s1 = Console::ReadLine();
    Console::Write(L"Введіть другий рядок: ");
    String^ s2 = Console::ReadLine();
    String^ result(s1 + L" " + s2);
    Console::WriteLine(result);
  */
    //Завдання 3
    /*
    Console::Write(L"Введіть перший рядок: ");
    String^ s1 = Console::ReadLine();
    Console::Write(L"Введіть другий рядок: ");
    String^ s2 = Console::ReadLine();
    int result = String::Compare(s1, s2);
    if (result == 0)
        Console::WriteLine(L"Рядки однакові.");
    else if (result < 0)
        Console::WriteLine(L"Перший рядок менший за другий.");
    else
        Console::WriteLine(L"Перший рядок більший за другий.");
    */
    //Завдання 4
    /*
    Console::Write(L"Введіть рядок: ");
    String^ s = Console::ReadLine();
    String^ reversed = "";
    int i = s->Length - 1;
    while (i >= 0)
    {
        reversed += s[i];
        --i;
    }
    Console::WriteLine(L"Рядок у зворотньому порядку: {0}", reversed);
    */
    //Завдання 5

    Console::Write(L"Введіть перший рядок: ");
    String^ s1 = Console::ReadLine();
    Console::Write(L"Введіть другий рядок: ");
    String^ s2 = Console::ReadLine();

    Console::WriteLine(L"Довжина першого рядка: {0}", s1->Length);
    Console::WriteLine(L"Довжина другого рядка: {0}", s2->Length);

    if (s1->Length > s2->Length)
        Console::WriteLine(L"Перший рядок довший.");
    else if (s1->Length < s2->Length)
        Console::WriteLine(L"Другий рядок довший.");
    else
        Console::WriteLine(L"Обидва рядки однакової довжини.");

    return 0;
}
