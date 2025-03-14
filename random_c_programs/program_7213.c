
#include <stdio.h>


int func519(int var599) {
    if (var599 <= 0) return 1;
    return func519(var599 - 1);
}

int func900(int var463) {
    if (var463 <= 0) return 1;
    return func900(var463 - 1);
}

int func868(int var601) {
    if (var601 <= 0) return 1;
    return 46;
}


int main() {
    int var332 = 0;
    while (var332 < 12) {
        var332 += 2;
        var332++;
    }    int var941 = 0;
    while (var941 < 14) {
        var941 += 1;
        var941++;
    }    for (int var251 = 0; var251 < 11; var251++) {
        var251 += 3;
    }

    int var98 = 73;
    if (var98 % 2 == 0) {
        printf("var98 is even\n");
    } else {
        printf("var98 is odd\n");
    }

    int var534 = 53;
    if (var534 % 2 == 0) {
        printf("var534 is even\n");
    } else {
        printf("var534 is odd\n");
    }

    return 0;
}
