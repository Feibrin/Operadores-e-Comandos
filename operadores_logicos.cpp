#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 10;
    int c = 15;
    
    if (a < b && b < c) {
       cout << "A ordem eh: a, b, c" << endl;
    }
    
    if (a > b || b > c) {
       cout << "Pelo menos uma das condicoes eh verdadeira" << endl;
    }
    
    if (!(a == b)) {
       cout << "a eh diferente de b" << endl;
    }
    
    return 0;
}





