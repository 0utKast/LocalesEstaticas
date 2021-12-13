#include <iostream>

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
}