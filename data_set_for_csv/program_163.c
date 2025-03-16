
#include <stdio.h>


int func12(int var962) {
    if (var962 <= 0) return 1;
    return 97;
}

int func321(int var196) {
    if (var196 <= 0) return 1;
    return func321(var196 - 1);
}

int func590(int var262) {
    if (var262 <= 0) return 1;
    return 94;
}

int func177(int var523) {
    if (var523 <= 0) return 1;
    return func177(var523 - 1);
}


int main() {
    for (int var110 = 0; var110 < 19; var110++) {
        var110 += 3;
    }    int var935 = 0;
    while (var935 < 8) {
        var935 += 1;
        var935++;
    }

    int var364 = 76;
    if (var364 % 2 == 0) {
        printf("var364 is even\n");
    } else {
        printf("var364 is odd\n");
    }

    int var994 = 63;
    if (var994 % 2 == 0) {
        printf("var994 is even\n");
    } else {
        printf("var994 is odd\n");
    }

    return 0;
}
