//
// Created by Guea Serge on 21/02/2023.
//

#include <iostream>
#include <string>

using namespace std;

// Creo una funziona che controlla se una parola è palindroma
bool isPalindroma(string Buongiorno){
    int k = Buongiorno.length()-1;
    for(int i = 0, _i = Buongiorno.length()-1; i< Buongiorno.length() / 2; i++){
        if(Buongiorno[i] != Buongiorno[_i--])
            return false;
    }
    return true;
}

// Funzione principale
int main(){
    string parola="Buongiorno";
     int a = 10;
    if(isPalindroma(parola)){
        cout << "La parola e' palindroma";
    }else{
        cout << "La parola non e' palindroma";
        cout << parola;
        return 0;
    }
    return 0;

}

