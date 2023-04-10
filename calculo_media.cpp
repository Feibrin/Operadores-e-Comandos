#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    
    double nota1, nota2, nota3, nota4;
    cout << "Digite sua primeira nota do semestre >>> ";
    cin >> nota1;
    cout << "Digite sua segunda nota do semestre >>> ";
    cin >> nota2;
    cout << "Digite sua terceira nota do semestre >>> ";
    cin >> nota3;
    cout << "Digite sua quarta nota do semestre >>> ";
    cin >> nota4;
    double soma = (nota1 + nota2 + nota3 + nota4);
    soma = (soma / 4);
    cout << "A sua media do semestre foi: " << soma << endl << endl;
    if (soma >= 7) {
        cout << "Parabens! voce foi aprovado!" << endl;
        }
    else {
        cout << "Eita! Voce foi reprovado!" << endl;
        }
        
        return 0;
}