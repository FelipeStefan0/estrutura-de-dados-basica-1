#include <iostream>
#include <cassert>
#include "fatorial.h"

using namespace std;

int main (void) {

    cout << "Iniciando testes" << endl;

    assert( fatorial(0) == 1 );
    assert( fatorial(1) == 1 );
    assert( fatorial(2) == 2 );
    assert( fatorial(5) == 120 );
    assert( fatorial(10) ==  3628800);

    cout << "Passou nos testes" << endl;
    
    return 0;
}