#include <iostream>
using namespace std;


float calcularIMC (float peso, float altura){
    float Imc = peso / (altura*altura);
    return Imc;
}

void calcularCategoriaImc(float imc){
    if(imc < 18.5) cout << " Peso Insuficiente" << endl;
       else if(imc < 24.9) cout << " Peso Normal" << endl;
               else if (imc < 29.9) cout << " Sobrepeso" << endl;
                        else if (imc >= 30) cout << " Obesidad" << endl;
}

float capturarDatosIMC(){
    float altura, peso;
    cout << "Digite Altura en metros " <<  endl;
    cin >> altura;
    cout << "Digite Peso en Kg: " << endl;
    cin >> peso;
    float resultado = calcularIMC(peso, altura);
    return resultado;
}

void imprimirNUmeroPares(){
    for (int i = 1; i <= 20 ; i++){
        if (i %2 == 0) cout << i << endl;
    }
}

void promediarNotas(){
    int NUM_NOTAS = 5;
    float Notas[NUM_NOTAS];
    float suma = 0;
    for (int i = 0; i < NUM_NOTAS; ++i) {
        cout << "Digite nota numero " << i << endl;
        cin >> Notas[i];
        suma = suma + Notas[i];
    }
    cout << "Promedio de Notas es "  << suma /NUM_NOTAS << endl;
}

int sumarNumeros(int num1, int num2){
    int suma = num1 + num2;
    return suma;
}





int main() {
    int menu;
    char op;
    do {
        cout << "M E N U : " << endl;
        cout << "Seleccione el ejercicio a realizar:" << endl;
        cout << "1. Calcular IMC." << endl;
        cout << "2. Imprimir numeros pares del 1 al 20." << endl;
        cout << "3. Promedio de Notas ingresadas." << endl;
        cout << "4. Suma de dos numeros enteros" << endl;
        cin >> menu;
        switch (menu) {
            case 1: {
                float imc = capturarDatosIMC();
                cout << "Tu imc es: " << imc << endl;
                calcularCategoriaImc(imc);
                break;
            }
            case 2: {
                imprimirNUmeroPares();
                break;
            }
            case 3:
                promediarNotas();
                break;
            case 4: {
                int num1, num2;
                cout << "Digite Primer numero a sumar: ";
                cin >> num1;
                cout << "Digite Segundo numero a sumar: ";
                cin >> num2;
                cout << "la suma del numero  " << num1 << " y " << num2 << " es: " << sumarNumeros(num1, num2) << endl;
            }


        }
        cout << "S --> Para realizar otra operacion  /  Cualquier tecla --> Salir." << endl;
        cin >> op;
        op = toupper(op);
    } while (op=='S');

    return 0;
}
