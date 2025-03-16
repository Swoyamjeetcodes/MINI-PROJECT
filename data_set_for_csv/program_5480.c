
#include <stdio.h>


int func790(int var328) {
    if (var328 <= 0) return 1;
    return func790(var328 - 1);
}

int func733(int var711) {
    if (var711 <= 0) return 1;
    return func733(var711 - 1);
}

int func7(int var601) {
    if (var601 <= 0) return 1;
    return 8;
}

int func12(int var330) {
    if (var330 <= 0) return 1;
    return func12(var330 - 1);
}


int main() {
    for (int var514 = 0; var514 < 20; var514++) {
        var514 += 5;
    }    int var976 = 0;
    while (var976 < 19) {
        var976 += 5;
        var976++;
    }    int var997 = 0;
    while (var997 < 14) {
        var997 += 3;
        var997++;
    }

    int var751 = 50;
    if (var751 % 2 == 0) {
        printf("var751 is even\n");
    } else {
        printf("var751 is odd\n");
    }

    int var609 = 22;
    if (var609 % 2 == 0) {
        printf("var609 is even\n");
    } else {
        printf("var609 is odd\n");
    }

    return 0;
}
