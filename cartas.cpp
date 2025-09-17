#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){

    long long n, k;
    long long cartas[n*k];
    vector<int> cartas1, fav;
    long long hap[k];
    unordered_map<long long, long long> cantCartas;

    cin >> n >> k;

    for(long long i = 0; i < n*k; i++){

        long long carta;
        cin >> carta;
        if(count(cartas1.begin(), cartas1.end(), carta)){

            cantCartas[carta] += 1;
        }
        else{

            cartas1.push_back(carta);
            cantCartas[carta] = 1;
        }
    } //O(n*k) pero estan acotados, 1<= n <= 500 y 1 <= k <= 10 -> O(1)

    for(long long i = 0; i < n; i++){ //basado en jugadores

        long long indice;
        cin >> indice; //te dice la carta favorita
        fav.push_back(indice);//despues compruebo con count 
    }

    for(long long i = 0; i < k; i++){ //correspondientes a los niveles de felicidad

        cin >> hap[i];
    }
    
    

    return 0;
}
