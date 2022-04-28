/*
* //Ejercicio1
#include <iostream>

using namespace std;

int main()
{
    int a, b, p;
    cout<<"USUARIO - Ingrese dos numeros"<<endl;
    cout<< "A= ";cin>>a;
    cout<<"B= ";cin>>b;
    p=a*b;
    cout<<"RPTA: "<<p;
    return 0;
}
// Ejercicio2
#include <iostream>

using namespace std;

int main()
{
    string n,pa,sa;
    cout<<"USUARIO - Ingrese su nombre y apellidos en minusculas"<<endl;
    cout<<"Nombre: ";cin>>n;
    cout<<"1er Apellido: ";cin>>pa;
    cout<<"2do Apellido: ";cin>>sa;
    cout<<"Este es su correo: "<<n[0]<<pa<<sa[0]<<"@unsa.edu.pe";
    return 0;
}
//Ejercicio 5
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n;
    cout<<"INgrese un numero decimal para redondear: ";cin>>n;
    cout<<"Numero redondeado: "<<round(n);
    return 0;
}

//Ejercicio 6
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    int v,r;
    std::vector<int>n;
    v=100+rand() %(1000-100);
    cout<<v;
    while(v/2!=0){
        r=v%2;
        n.push_back(r);
    }
}

//Ejercicio7
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"ingresa A: ";cin>>a;
    cout<<"ingresa B: ";cin>>b;
    if(a%b==0){
            cout<<b<<" es divisor de "<<a;
    }else{
        if(b%a==0){
            cout<<a<<" es divisor de "<<b;
        }else{
            cout<<"ninguno es divisor del otro";
        }
    }
return 0;
}
*/