#include <bits/stdc++.h>

using namespace std;

int main(){
    int celsius;
    cout << fixed << setprecision(2);

    cout << "Digite a temperatura em GRAUS CELSIUS: "; cin >> celsius;

    cout << "A temperatura em FAHREINHEIT eh: " << celsius * 1.8 + 32 << fixed;
}