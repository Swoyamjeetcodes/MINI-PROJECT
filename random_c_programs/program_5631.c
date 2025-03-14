
#include <stdio.h>


int func250(int var235) {
    if (var235 <= 0) return 1;
    return func250(var235 - 1);
}

int func420(int var852) {
    if (var852 <= 0) return 1;
    return func420(var852 - 1);
}

int func997(int var203) {
    if (var203 <= 0) return 1;
    return 93;
}

int func519(int var884) {
    if (var884 <= 0) return 1;
    return 69;
}


int main() {
    int var154 = 0;
    while (var154 < 14) {
        var154 += 5;
        var154++;
    }

    int var25 = 22;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    int var288 = 98;
    if (var288 % 2 == 0) {
        printf("var288 is even\n");
    } else {
        printf("var288 is odd\n");
    }

    return 0;
}
