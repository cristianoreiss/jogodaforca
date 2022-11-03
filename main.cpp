#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
using namespace std;



int main() {
    string palavra_escolhida, descoberto;
    int i, quantidade_letras, acertos, chances;
    char letra;
    bool acerto = false;
    
    i = 0;
    quantidade_letras = 0;
    



   
    cout<<("Pede algum amigo para digitar uma palavra: ");
    cin>>(palavra_escolhida);
    system("cls");
    descoberto = palavra_escolhida;
    
    
    while(descoberto[i] != '\0') {
        descoberto[i] = '-';
        i++;
    }
    i = 0;
    while(descoberto[i] != '\0') {
        quantidade_letras++;
        i++;
    }
    i = 0;
    for (chances = 0; chances < quantidade_letras; chances++){
    	cout<<endl<<(descoberto)<<endl;
        cout<<("Digite uma letra: ");
        cin>>(letra);
        if (letra == palavra_escolhida[i]) {
            descoberto[i] = letra;
            i++;
        }
    }
    
    return 0;
}
