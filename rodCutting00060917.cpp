/* 
 * File:   rodCutting00060917.cpp
 * Author: Cesar
 *
 * Created on 24 de octubre de 2019, 10:37 PM
 */

#include <iostream>
#include <algorithm>
using namespace std;

int cutRod(int precios[], int n) {
    int maxTemp;
    int respuestas[n + 1];
    respuestas[0] = 0;

    for (int i = 1; i <= n; i++) {
        maxTemp = -999999;
        for (int j = 0; j < i; j++)
            maxTemp = max(maxTemp, precios[j] + respuestas[i - j - 1]);
        respuestas[i] = maxTemp;
    }
    return respuestas[n];
}

int main(int argc, char** argv) {
    int precios[] = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};

    cout << cutRod(precios, 5) << endl;
    return 0;
}

