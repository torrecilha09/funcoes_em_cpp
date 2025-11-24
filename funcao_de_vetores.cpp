#include <iostream>
#include <string>
using namespace std;

int maiorElemento (int vet[], int tamanho) {
    int maior = vet[0];
    
    for(int  i = 1; 1 < tamanho; i++) {
        if(vet[i] > maior) {
            maior = vet[i];
            
        }
    }
    return maior;
}

int main() {
    int n;
    
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    
    int vetor[n];
    
    cout << "Digite os elementos do vetor: " << endl;
    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }
    cout << "O maior elemento é : " << maiorElemento(vetor, n) << endl;
    
    return 0;
}
