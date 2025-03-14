
#include <stdio.h>


int func24(int var30) {
    if (var30 <= 0) return 1;
    return func24(var30 - 1);
}

int func144(int var135) {
    if (var135 <= 0) return 1;
    return func144(var135 - 1);
}


int main() {
    int var203 = 0;
    while (var203 < 10) {
        var203 += 2;
        var203++;
    }

    int var237 = 75;
    if (var237 % 2 == 0) {
        printf("var237 is even\n");
    } else {
        printf("var237 is odd\n");
    }

    int var73 = 6;
    if (var73 % 2 == 0) {
        printf("var73 is even\n");
    } else {
        printf("var73 is odd\n");
    }

    int var242 = 64;
    if (var242 % 2 == 0) {
        printf("var242 is even\n");
    } else {
        printf("var242 is odd\n");
    }

    return 0;
}
