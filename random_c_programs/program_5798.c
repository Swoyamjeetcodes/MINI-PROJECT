
#include <stdio.h>


int func556(int var723) {
    if (var723 <= 0) return 1;
    return func556(var723 - 1);
}

int func713(int var566) {
    if (var566 <= 0) return 1;
    return func713(var566 - 1);
}

int func771(int var160) {
    if (var160 <= 0) return 1;
    return 28;
}


int main() {
    for (int var541 = 0; var541 < 19; var541++) {
        var541 += 2;
    }    for (int var619 = 0; var619 < 17; var619++) {
        var619 += 5;
    }

    int var768 = 66;
    if (var768 % 2 == 0) {
        printf("var768 is even\n");
    } else {
        printf("var768 is odd\n");
    }

    int var331 = 67;
    if (var331 % 2 == 0) {
        printf("var331 is even\n");
    } else {
        printf("var331 is odd\n");
    }

    return 0;
}
