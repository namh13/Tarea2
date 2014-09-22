// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la pila son pares, de lo contrario devuelve false
bool sonPares(stack<int> mi_pila)
{

    do // hacemos un ciclo para buscar en la pila que empieza primero y evalua despues
     {
         if(mi_pila.top() %2 !=0) // evalua si existe algun elemento impar
         {
             return false; // retorna false si existe algun elemento impar en la pila
         }
         mi_pila.pop(); // elimina el primer elemento de la pila en cada pasada
     }while(!mi_pila.empty()); //ciclo que se repite siempre y cuando la pila no este vacia

    return true; // retorna verdadero si los valores son verdaderos
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{

    do // hacemos un ciclo para buscar en la lista que empieza primero y al final evalua la condicion
    {
        if(mi_lista.front() % 2 != 0)  // Evaluamos si existe algun elemento impar dentro de la lista
        {
            return false; // retorna false si existe algun elemento impar dentro de la lista
        }
        else
        {
            mi_lista.pop_front(); // se elimina el primer elemento de la lista
        }
    }while(!mi_lista.empty()); //siempre y cuando la condicion no se cumpla seguira repitiendose

    return true; // si todos los elementos son pares retorna verdadero
}

//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(stack<string> mi_pila, string str)
{

    for(int i=0; i<mi_pila.size() != 0; i++)   // creamos un ciclo que se estara ejecutando mientras el tamaño de la pila sea distinto de cero
    {
        if(mi_pila.top() != str) //devuelve false si no encntramos el elemento str  dentro de la pila
        {
            return false;
        }
        mi_pila.pop(); // eliminamos el elemento de arriba o que utilizamos

    }
    return true;  // si el elemento se encuentra devolvemos true

}
//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{

    do // ciclo para recorrer la lista que empieza antes de evaluar ela condicion
    {
        if(mi_lista.front() == str) //comparamos el elemento dentro de la lista para ver si hay uno igual
        {
            return true; // si se encuentra el elemento devolvemos verdadero
        }
        mi_lista.pop_front(); //eliminamos el primer elemento de la lista
    }while(!mi_lista.empty()); // mientras no se cumpla la condicion el ciclo se repitira

    return false; // si no se encuentra devolvemos falso

}
//devuelve la suma de los elementos de la cola
int getSuma(stack<int> mi_pila)
{

     int suma = 0; //creamos una variable para guardar el resultado de la suma
     do
        {
        suma += mi_pila.top(); // sumamos el ultimo elemento mas el valor de la variable suma
        mi_pila.pop(); // eliminamos el elemento utilizado

    }while(!mi_pila.empty()); //comprobamos que la pila no este vacia

    return suma;// devolvemos el total de la suma

}
//devuelve la suma de los elementos de la lista
int getSuma(list<int> mi_lista)
{

    int  suma = 0;// creamos una variable suma para guardar los valores
    do
    {
        suma += mi_lista.front();// sumamos el primer elemento de la lista mas el valor de la variable suma
        mi_lista.pop_front(); // eliminamos el elemento utilizado de la lista
    }while(!mi_lista.empty()); //comprobamos que la lista no este vacia para ejecutando el ciclo

  return suma; //retornamos la variables suma

}
//Devuelve true si los elementos de la lista son palindromos, de lo contrario devuelve false
bool esPalindroma(list<char>mi_lista)
{
    do
    {
        if(mi_lista.front() != mi_lista.back()) //si el primer elemento de la lista es distinto al ultimo devolvemos false
        {
            return false;
        }
        mi_lista.pop_front(); // eliminamos el primer elemento de la lista
        mi_lista.pop_back(); // eliminamos el ultimo elemento de la lista
    }while(!mi_lista.empty());//comprobamos que la lista no este vacia

    return true; //de lo contrario devolvemos verdadero
}


int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
