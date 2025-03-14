
#include <stdio.h>


int func244(int var398) {
    if (var398 <= 0) return 1;
    return func244(var398 - 1);
}


int main() {
    for (int var111 = 0; var111 < 18; var111++) {
        var111 += 2;
    }    int var331 = 0;
    while (var331 < 5) {
        var331 += 2;
        var331++;
    }

    int var203 = 36;
    if (var203 % 2 == 0) {
        printf("var203 is even\n");
    } else {
        printf("var203 is odd\n");
    }

    int var274 = 85;
    if (var274 % 2 == 0) {
        printf("var274 is even\n");
    } else {
        printf("var274 is odd\n");
    }

    int var49 = 83;
    if (var49 % 2 == 0) {
        printf("var49 is even\n");
    } else {
        printf("var49 is odd\n");
    }

    return 0;
}
