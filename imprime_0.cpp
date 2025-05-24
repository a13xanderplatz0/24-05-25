#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int main() {
    int A[10] = {7, 6, 1, 5, 8, 9, 4, 2, 3, 10};
    int B[10] = {0, 0, 0, 1, 1, 0, 0, 1, 1, 0};
    int (*F[])(int, int) = {suma, resta};
    int res[10];

    for (int i = 0; i < 10; i++) {
        res[i] = F[B[i]](A[i], B[i]);  // Use B[i] to choose between suma (0) and resta (1)
    }

    for (int i = 0; i < 10; i++) {
        cout << res[i] << " ";
    }

    cout << endl;
    return 0;
}
