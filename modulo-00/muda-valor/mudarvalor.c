#include <stdio.h>
#include <assert.h>

int main (){

    int a, b, temp;
    a = 999;
    b = 555;

    //
    // Sua lógica
    //
	temp = a;
	a = b;
	b = temp;
    //
    // Testes
    //
    assert(a == 555);
    assert(b == 999);

    return 0;
}