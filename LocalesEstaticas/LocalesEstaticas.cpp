#include <iostream>

int generateID()
{
    static int s_itemID{ 0 };
     // hace copia de s_itemID, incrementa el real s_itemID, luego devuelve el valor de la copia
    std::cout << s_itemID << '\n';
    return s_itemID++;
}

int main()
{   
    generateID();
    generateID();
    generateID();
    generateID();
    return 0;
}



























/*#include <iostream>

void incrementaEImprime()
{
    static int s_valor{ 1 }; // duración estática por palabra clave.  
                             //Este inicializador se ejecuta sólo una vez.
    ++s_valor;
    std::cout << s_valor << '\n';
} // s_valor no se destruye aquí, pero se convierte en inaccesible porque está fuera de alcance.


int main()
{
   
    incrementaEImprime();
    incrementaEImprime();
    incrementaEImprime(); 


    return 0;
}*/





























/*#include <iostream>

void incrementaEImprime()
{
    int valor{ 1 }; // duración automática predeterminada
    ++valor;
    std::cout << valor << '\n';
} // valor se destruye aquí

int main()
{
    incrementaEImprime();
    incrementaEImprime();
    incrementaEImprime();

    return 0;
}*/

















/*#include <iostream>

int obtenerInteger()
{
    static bool s_esPrimeraLlamada{ true };

    if (s_esPrimeraLlamada)
    {
        std::cout << "Escribe un entero: ";
        s_esPrimeraLlamada = false;
    }
    else
    {
        std::cout << "Escribe otro entero: ";
    }

    int i{};
    std::cin >> i;
    return i;
}

int main()
{
    int a{ obtenerInteger() };
    int b{ obtenerInteger() };

    std::cout << a << " + " << b << " = " << (a + b) << '\n';

    return 0;
}*/







/*#include <iostream>

void incrementaEImprime()
{
    static int s_valor{ 1 }; // duración estática por palabra clave.  Este inicializador se ejecuta sólo una vez.
    ++s_valor;
    std::cout << s_valor << '\n';
} // s_valor no se destruye aquí, pero se convierte en inaccesible porque está fuera de alcance.

int generateID()
{
    static int s_itemID{ 0 };
     // hace copia de s_itemID, incrementa el real s_itemID, luego devuelve el valor de la copia
    std::cout << s_itemID << '\n';
    return s_itemID++;
}

int main() 
{

    incrementaEImprime();
    incrementaEImprime();
    incrementaEImprime();
    generateID();
    generateID();
    generateID();
    generateID();


    return 0;
}*/

















