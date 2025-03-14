
#include <stdio.h>


int func587(int var189) {
    if (var189 <= 0) return 1;
    return func587(var189 - 1);
}

int func102(int var305) {
    if (var305 <= 0) return 1;
    return func102(var305 - 1);
}

int func310(int var294) {
    if (var294 <= 0) return 1;
    return func310(var294 - 1);
}

int func821(int var440) {
    if (var440 <= 0) return 1;
    return func821(var440 - 1);
}


int main() {
    for (int var912 = 0; var912 < 11; var912++) {
        var912 += 2;
    }    for (int var502 = 0; var502 < 15; var502++) {
        var502 += 4;
    }    int var695 = 0;
    while (var695 < 18) {
        var695 += 4;
        var695++;
    }

    int var525 = 51;
    if (var525 % 2 == 0) {
        printf("var525 is even\n");
    } else {
        printf("var525 is odd\n");
    }

    int var901 = 39;
    if (var901 % 2 == 0) {
        printf("var901 is even\n");
    } else {
        printf("var901 is odd\n");
    }

    int var420 = 85;
    if (var420 % 2 == 0) {
        printf("var420 is even\n");
    } else {
        printf("var420 is odd\n");
    }

    return 0;
}
