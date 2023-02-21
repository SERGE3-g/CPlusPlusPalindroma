//
// Created by Guea Serge on 21/02/2023.
//

#include <iostream>
#include <string>

using namespace std;

// Creo una funziona che controlla se una parola è palindroma
bool isPalindroma(string Buongiorno){
    bool palindroma = true;
    int k = Buongiorno.length()-1;
    for(int i = 0, _i = Buongiorno.length()-1; i< Buongiorno.length() / 2; i++){
        if(Buongiorno[i] != Buongiorno[_i--]){
            palindroma = false;
            break;
        }
    }
    return true;
}

// Funzione principale
int main(){
    string parola="Buongiorno";
     int a = 10;
     cout << isPalindroma(parola) << endl;
    if(isPalindroma(parola)){
        cout << "La parola e' palindroma" << endl;
    }else{
        cout << "La parola non e' palindroma" << endl;
        return 0;
    }


}

