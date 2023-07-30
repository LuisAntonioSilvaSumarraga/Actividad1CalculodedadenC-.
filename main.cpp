//luisAntonioSilvaSumarraga
#include <stdio.h>
#include <iostream>

int main()
{
    int edad;
    std::cout << "Por favor ingrese su edad:  ";
    std::cin >> edad;
    
    if (edad >= 18){
        std::cout << "Bienvenido usted es mayor de edad :)." << std::endl;
    } else {
            std::cout << "Disculpe usted es menor de edad :(." <<std::endl;
    }    
    
    return 0;
}    