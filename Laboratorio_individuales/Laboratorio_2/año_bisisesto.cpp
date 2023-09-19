#include "iostream"

using namespace std;

int main()
{
    int n, anio;


    cout<<"ingrese año"<<endl;
    cin>> anio;

    if(anio % 4 == 0){
        cout<<"nEs divisible entre 100"<<endl;
 

    if(anio % 100 !=0){
        cout<<"nNo es divisible entre 100"<<endl;
        cout<<"nEs bisiesto"<<endl;
    }
    else if(anio % 400 == 0){
        cout<<"nEs divisible entre 100"<<endl;
        cout<<"nEs divisible entre 100"<<endl;
        cout<<"nEs bisiesto"<<endl;
    }
    }
return 0;
}