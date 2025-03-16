
#include <stdio.h>


int func929(int var886) {
    if (var886 <= 0) return 1;
    return func929(var886 - 1);
}

int func416(int var532) {
    if (var532 <= 0) return 1;
    return 41;
}


int main() {
    int var606 = 0;
    while (var606 < 13) {
        var606 += 1;
        var606++;
    }    int var462 = 0;
    while (var462 < 16) {
        var462 += 1;
        var462++;
    }    for (int var972 = 0; var972 < 16; var972++) {
        var972 += 5;
    }

    int var929 = 55;
    if (var929 % 2 == 0) {
        printf("var929 is even\n");
    } else {
        printf("var929 is odd\n");
    }

    return 0;
}
