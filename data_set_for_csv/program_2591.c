
#include <stdio.h>


int func253(int var592) {
    if (var592 <= 0) return 1;
    return func253(var592 - 1);
}

int func639(int var928) {
    if (var928 <= 0) return 1;
    return 19;
}

int func276(int var846) {
    if (var846 <= 0) return 1;
    return func276(var846 - 1);
}


int main() {
    for (int var832 = 0; var832 < 13; var832++) {
        var832 += 4;
    }    int var717 = 0;
    while (var717 < 19) {
        var717 += 3;
        var717++;
    }

    int var187 = 97;
    if (var187 % 2 == 0) {
        printf("var187 is even\n");
    } else {
        printf("var187 is odd\n");
    }

    return 0;
}
