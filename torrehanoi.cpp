#include <iostream>

using namespace std;

void jugar(int disco, int torre1, int torre2, int torre3);

int hanoi(int n)
{
    if (n == 1)
        return 1;
    else
        return 2 * hanoi(n - 1) + 1;
}


int main()
{
    char res;
    do
    {
        int Torre1 = 1, Torre2 = 2, Torre3 = 3, Disco = 0;
         cout << "       TORRES DE HANOI  \n\n";
        cout << "Con cuantos discos desea jugar? ";
        cin >> Disco;

        jugar(Disco, Torre1, Torre2, Torre3);
        cout << endl;
        cout << "\nMovimientos necesarios: ";
        cout << hanoi(Disco);
        cout << endl;
        cout << "Desea volver a jugar? (s/n)";
        cin >> res;
    } while (res == 's');

    return 0;
}

void jugar(int disco, int torre1, int torre2, int torre3){
   
    if (disco == 1)
    {
        cout << "Mover disco de la torre  " << torre1 << " hacia la torre  " << torre3 << endl;
    }
    else
 {
        jugar(disco - 1, torre1, torre3, torre2);
        cout << "Mover disco de la torre  " << torre1 << " hacia la torre  " << torre3 << endl;
        jugar(disco - 1, torre2, torre1, torre3);
    }
}
