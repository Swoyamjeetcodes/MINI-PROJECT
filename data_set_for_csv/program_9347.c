
#include <stdio.h>


int func576(int var118) {
    if (var118 <= 0) return 1;
    return func576(var118 - 1);
}

int func931(int var366) {
    if (var366 <= 0) return 1;
    return 17;
}

int func306(int var673) {
    if (var673 <= 0) return 1;
    return func306(var673 - 1);
}


int main() {
    int var684 = 0;
    while (var684 < 15) {
        var684 += 2;
        var684++;
    }    int var805 = 0;
    while (var805 < 5) {
        var805 += 5;
        var805++;
    }    for (int var935 = 0; var935 < 5; var935++) {
        var935 += 3;
    }

    int var194 = 22;
    if (var194 % 2 == 0) {
        printf("var194 is even\n");
    } else {
        printf("var194 is odd\n");
    }

    return 0;
}
