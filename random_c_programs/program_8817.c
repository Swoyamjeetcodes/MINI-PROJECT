
#include <stdio.h>


int func776(int var841) {
    if (var841 <= 0) return 1;
    return func776(var841 - 1);
}

int func692(int var74) {
    if (var74 <= 0) return 1;
    return func692(var74 - 1);
}

int func811(int var886) {
    if (var886 <= 0) return 1;
    return 13;
}


int main() {
    for (int var568 = 0; var568 < 17; var568++) {
        var568 += 2;
    }    for (int var33 = 0; var33 < 16; var33++) {
        var33 += 2;
    }    int var146 = 0;
    while (var146 < 15) {
        var146 += 1;
        var146++;
    }

    int var101 = 39;
    if (var101 % 2 == 0) {
        printf("var101 is even\n");
    } else {
        printf("var101 is odd\n");
    }

    int var589 = 10;
    if (var589 % 2 == 0) {
        printf("var589 is even\n");
    } else {
        printf("var589 is odd\n");
    }

    return 0;
}
