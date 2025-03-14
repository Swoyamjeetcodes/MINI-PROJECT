
#include <stdio.h>


int func749(int var983) {
    if (var983 <= 0) return 1;
    return func749(var983 - 1);
}


int main() {
    for (int var203 = 0; var203 < 13; var203++) {
        var203 += 2;
    }

    int var25 = 56;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    int var442 = 0;
    if (var442 % 2 == 0) {
        printf("var442 is even\n");
    } else {
        printf("var442 is odd\n");
    }

    int var837 = 18;
    if (var837 % 2 == 0) {
        printf("var837 is even\n");
    } else {
        printf("var837 is odd\n");
    }

    return 0;
}
