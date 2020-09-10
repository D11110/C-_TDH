#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void Hanoi(int limite, int discoOrigen, int temp, int discoDestino, int cont)
{
    if (cont == limite)
    {
        cout << setw(5) << to_string(discoOrigen) << " --> " << to_string(discoDestino) << endl;
    }
    else
    {
        Hanoi(limite , discoOrigen, discoDestino, temp, cont +1);
        cout << setw(5) << to_string(discoOrigen) << " --> " << to_string(discoDestino)<< endl;
        Hanoi(limite, temp, discoOrigen, discoDestino, cont +1);
    }
}

int main()
{
    std::cout << "Ingrese el numero de discos: " << std::endl;
    int cantDiscos;
    cin >> cantDiscos;

    cout << setw(5) << "Aguja --> aguja"<< endl;
    Hanoi(cantDiscos, 1, 2, 3, 1);
}