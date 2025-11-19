#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    /*Console::OutputEncoding = System::Text::Encoding::UTF8;
    Console::InputEncoding = System::Text::Encoding::UTF8;
    array<double>^ U = gcnew array<double> 
    { 
        220, 380, 6000, 10000, 35000, 110000 
    }; 
    int n = U->Length; 
    array<double>^ Ikz = gcnew array<double>(n);  

    Console::Write("Введіть потужність S(ват): "); 
    double S = Convert::ToDouble(Console::ReadLine()); 
    Console::WriteLine("\nТаблиця значень Iкз для напруги U:"); 
    Console::WriteLine("   U(V)         Iкз(A)"); 
    for (int i = 0; i < n; i++) { 
        Ikz[i] = S / (Math::Sqrt(3) * U[i]); 
        Console::WriteLine("{0,6}{1,15:F2}", U[i], Ikz[i]); 
    }*/
    const int size(8);
    array<double>^ arr = gcnew array<double>(size);
    Console::WriteLine("Введіть 8 чисел у масив(x1, x2... x8: )");
    for (int i = 0; i < size; i++)
    {
        arr[i] = Convert::ToDouble(Console::ReadLine());
    }
    array<double, 2>^ matrix = gcnew array<double, 2>(size, size);
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) {
            matrix[i, j] = Math::Pow(arr[j], i + 1);
        }
    }
    Console::WriteLine("Матриця 8x8: ");
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            Console::Write("{0,12} ", matrix[row, col]);
        }
        Console::WriteLine();
    }
    return 0;
}
