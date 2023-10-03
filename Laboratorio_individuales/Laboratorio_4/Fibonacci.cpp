#include<iostream>

using namespace std;

    int main() 
    {

                int numero, anterior, siguiente, n, suma=0;
               anterior=0;
                siguiente=1;
                // identifica las variables con sus valores
                    cout<<"secuencia Fibonacci";
                    cin>> numero;
                
                    if(numero==1)
                    {
                        cout<< anterior;
                    }

                    if(numero==2)
                    {
                        cout<< anterior << ", " << siguiente;
                    }

                    if(numero>=3)
                    {
                        cout<< anterior << ", " << siguiente;
                    }
                    // condiciones antes de ejecutar el codigo
    
                        for(n=3;n<=numero;n=n+1)
                        {
                            cout<< ", ";
                            suma=anterior+siguiente;
                            cout<< suma;
                            anterior=siguiente;
                            siguiente=suma;
                        }
                        // codigo a ejecutar mientras se cumple su funcion


    return 0;
    }
    