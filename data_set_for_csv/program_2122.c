
#include <stdio.h>


int func500(int var179) {
    if (var179 <= 0) return 1;
    return func500(var179 - 1);
}

int func411(int var464) {
    if (var464 <= 0) return 1;
    return func411(var464 - 1);
}

int func948(int var907) {
    if (var907 <= 0) return 1;
    return 85;
}


int main() {
    int var477 = 0;
    while (var477 < 9) {
        var477 += 2;
        var477++;
    }    int var267 = 0;
    while (var267 < 7) {
        var267 += 1;
        var267++;
    }    int var217 = 0;
    while (var217 < 13) {
        var217 += 4;
        var217++;
    }

    int var325 = 63;
    if (var325 % 2 == 0) {
        printf("var325 is even\n");
    } else {
        printf("var325 is odd\n");
    }

    int var532 = 20;
    if (var532 % 2 == 0) {
        printf("var532 is even\n");
    } else {
        printf("var532 is odd\n");
    }

    return 0;
}
