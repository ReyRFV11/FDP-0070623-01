#include "iostream"
using namespace std;

int main()
{

int n;

   cout<<"ingrese nota"<<endl;
    cin>> n;

    if(n>=60){
       cout<<"ha aprobado"<<endl;
       if(n>=85){
         cout<<"es sobresaliente"<<endl;
       }
    }

    if(n<60){
       cout<<"ha reprobado"<<endl;
       if(n<=35){
         cout<<"es deficiente"<<endl;
       }
    }

   
return 0;
}

