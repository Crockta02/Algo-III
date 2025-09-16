#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){

    int n, k;
    int cartas[n*k];
    vector<int> cartas1;
    int fav[k], hap[k];
    unordered_map<int, int> cantCartas;

    cin >> n >> k;

    for(int i = 0; i < n*k; i++){

        int carta;
        cin >> carta;
        if(count(cartas1.begin(), cartas1.end(), carta)){

            cantCartas[carta] += 1;
        }
        else{

            cartas1.push_back(carta);
            cantCartas[carta] = 1;
        }
    } //O(n*k) pero estan acotados, 1<= n <= 500 y 1 <= k <= 10 -> O(1)

    for(int i = 0; i < k; i++){

        int indice;
        cin >> indice; //te dice la carta favorita
        fav[indice] += 1; 
    }

    for(int i = 0; i < k; i++){

        cin >> hap[i];
    }

    

    return 0;
}