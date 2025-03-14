
#include <stdio.h>


int func780(int var347) {
    if (var347 <= 0) return 1;
    return 50;
}

int func455(int var726) {
    if (var726 <= 0) return 1;
    return func455(var726 - 1);
}

int func794(int var866) {
    if (var866 <= 0) return 1;
    return 72;
}


int main() {
    int var578 = 0;
    while (var578 < 18) {
        var578 += 2;
        var578++;
    }    int var203 = 0;
    while (var203 < 10) {
        var203 += 1;
        var203++;
    }

    int var310 = 90;
    if (var310 % 2 == 0) {
        printf("var310 is even\n");
    } else {
        printf("var310 is odd\n");
    }

    int var343 = 32;
    if (var343 % 2 == 0) {
        printf("var343 is even\n");
    } else {
        printf("var343 is odd\n");
    }

    return 0;
}
