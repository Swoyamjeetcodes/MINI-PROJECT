
#include <stdio.h>


int func137(int var285) {
    if (var285 <= 0) return 1;
    return func137(var285 - 1);
}

int func514(int var681) {
    if (var681 <= 0) return 1;
    return func514(var681 - 1);
}

int func697(int var118) {
    if (var118 <= 0) return 1;
    return 19;
}


int main() {
    int var711 = 0;
    while (var711 < 15) {
        var711 += 5;
        var711++;
    }

    int var428 = 1;
    if (var428 % 2 == 0) {
        printf("var428 is even\n");
    } else {
        printf("var428 is odd\n");
    }

    int var33 = 70;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    int var895 = 58;
    if (var895 % 2 == 0) {
        printf("var895 is even\n");
    } else {
        printf("var895 is odd\n");
    }

    return 0;
}
