
#include <stdio.h>


int func33(int var67) {
    if (var67 <= 0) return 1;
    return func33(var67 - 1);
}

int func35(int var203) {
    if (var203 <= 0) return 1;
    return func35(var203 - 1);
}

int func896(int var185) {
    if (var185 <= 0) return 1;
    return 49;
}


int main() {
    for (int var144 = 0; var144 < 8; var144++) {
        var144 += 4;
    }    int var351 = 0;
    while (var351 < 9) {
        var351 += 5;
        var351++;
    }

    int var307 = 9;
    if (var307 % 2 == 0) {
        printf("var307 is even\n");
    } else {
        printf("var307 is odd\n");
    }

    int var345 = 83;
    if (var345 % 2 == 0) {
        printf("var345 is even\n");
    } else {
        printf("var345 is odd\n");
    }

    int var435 = 18;
    if (var435 % 2 == 0) {
        printf("var435 is even\n");
    } else {
        printf("var435 is odd\n");
    }

    return 0;
}
