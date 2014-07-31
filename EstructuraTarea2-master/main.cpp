// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la pila son pares, de lo contrario devuelve false
bool sonPares(stack<int> mi_pila)
{
    while(!mi_pila.empty()) // entrara al ciclo siempre y cuando no este vacia la pila
    {
        if(mi_pila.top() % 2 == 0) // agarra el ultimo elemento de la pila y saca el residuo, si da igual a cero lo elimina si no devuelve false.
        {
            mi_pila.pop();
        }
        else
        {
            return false;
        }
    }
    return true;
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    while(!mi_lista.empty()) // mira a ver si la lista esta vacia o no.
    {
        if(mi_lista.front() % 2 == 0) //agarra el primer elemento de la lista y le saca el residuo si el residuo da cero lo elimina y devuelve true.
        {
            mi_lista.pop_front();
        }
        else
        {
            return false;
        }
    }
    return true;
}

//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(stack<string> mi_pila, string str)
{
    while(!mi_pila.empty()) //mira a ver si la pila esta vacia o no.
    {
        if(mi_pila.top() == str) //compara el ultimo elemento de la pila con la variable str para ver si son iguales o no, si lo es devuelve true sino false.
        {
            return true;
        }
        mi_pila.pop(); //elimina el ultimo de la pila
    }
    return false;
}

//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    while(!mi_lista.empty()) //mira a ver si la lista esta vacia o no.
    {
        if(mi_lista.front() == str) //compara el primer elemento de la lista con la variable str para ver si son iguales si lo son devuelve true
        {
            return true;
        }
        mi_lista.pop_front(); //elimina el primer elemento de la lista
    }
    return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(stack<int> mi_pila)
{
    int suma=0;
    while(!mi_pila.empty())  //mira a ver si la pila esta vacia o no.
    {
        suma = suma + mi_pila.top();  //suma el ultimo elemento de la pila con el valor almacenado en la variable suma.
        mi_pila.pop(); //elimina el ultimo valor de la pila
    }
    return suma;
}

//devuelve la suma de los elementos de la lista
int getSuma(list<int> mi_lista)
{
    int suma=0;
    for(int i=0; i<mi_lista.size(); i++)  //es un ciclo que empieza en cero y que finalizara con el tamaño de la lista
    {
        suma = suma + mi_lista.back(); //Suma el ultimo elemento de la lista con el valor de la variable suma.
        mi_lista.pop_front(); //elimina el elemento primer elemento de la lista pero de atras para adelante osea el ultimo elemento.
    }
    return suma;
}

//Devuelve true si los elementos de la lista son palindromos, de lo contrario devuelve false
bool esPalindroma(list<char>mi_lista)
{
    for(int i=0; i < mi_lista.size(); i++) //recorremos la lista hasta que ya no haigan elementos
    {
        if(mi_lista.front() == mi_lista.back()) //comprobamos si el primer elemento es igual al ultimo
        {
            return true; //
        }
        mi_lista.pop_front(); //eliminamos el primer elemento de la lista
        mi_lista.pop_back(); //eliminamos el ultimo elemento de la lista
    }
    return false;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
