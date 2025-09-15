
#include <iostream>
#include <string>
using namespace std;
const N = 100000;

int dp[N + 1][2]

int main()
{
	int n;
	cin >> n;
	int i = 1;
	string anterior, actual;
	int energia;

	cin >> anterior;
	cin >> energia;

	dp[0][0] = 0;
	dp[0][1] = energia;

	while (i < n) {

		cin >> actual;
		cin >> energia;

		char priAnt = anterior[0];
		char ultAnt = anterior[anterior.length() - 1];
		char priAct = actual[0];
        char ultAnt = actual[actual.length() - 1];
        
        if(priAct >= ultAnt)    dp[i][0] = dp[i-1][0]
        if(priAct < ultAnt)     dp[i][]
    
        i++;
	}

	return 0;
}