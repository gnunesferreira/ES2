#include <iostream>
#include <cmath>

using namespace std;

#pragma mark - functions declaration
void showMenu();
void calcula1grau();
void calcula2grau();


int main() {
    int option;
    while (true) {
        system("clear");
        
        showMenu();
        cin >> option;
        
        if (!option) {
            break;
        }
        else if (option == 1) {
            calcula1grau();
        }
        else if (option == 2) {
            calcula2grau();
        }
        
        cout << "Press Enter to Continue";
        cin.ignore();
        cin.ignore();
    }
    return 0;
};

void showMenu() {
    cout << "#################### Calculadora ###########################" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "1 - Equação primeiro grau  ---------------------------------" << endl;
    cout << "2 - Equação segundo grau  ----------------------------------" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "0 - Sair  --------------------------------------------------" << endl;
    cout << "############################################################" << endl;
    cout << "Opção: ";
};

void calcula1grau() {
    float a, b, result;
    
    cout << "############################################################" << endl;
    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    
    if (a == 0) {
        cout << "############################################################" << endl;
        cout << "Não há raízes reais" << endl;
        cout << "############################################################" << endl;
    }
    
    result = (-b)/a;
    
    cout << "############################################################" << endl;
    cout << "A raíz da equação é " << result << endl;
    cout << "############################################################" << endl;
}

void calcula2grau() {
    float a, b, c, delta,result1, result2;
    
    cout << "############################################################" << endl;
    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    cout << "Digite o valor de C: ";
    cin >> c;
    
    delta = pow(b,2) - 4 * a * c;
    
    if (delta < 0) {
        cout << "############################################################" << endl;
        cout << "Não há raízes reais" << endl;
        cout << "############################################################" << endl;
    }
    if (delta == 0) {
        //There is just one result
        result1 = (-b)/ 2*a;
        
        cout << "############################################################" << endl;
        cout << "A raíz da equação é " << result1 << endl;
        cout << "############################################################" << endl;
    } else if (delta > 0){
        //There are two results
        result1 = ((-b) + sqrt(delta)) / (2*a);
        result2 = ((-b) - sqrt(delta)) / (2*a);
        
        cout << "############################################################" << endl;
        cout << "A x1 da equação é " << result1 << endl;
        cout << "A x2 da equação é " << result2 << endl;
        cout << "############################################################" << endl;
    }
}