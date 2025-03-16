
#include <stdio.h>


int func317(int var203) {
    if (var203 <= 0) return 1;
    return func317(var203 - 1);
}


int main() {
    for (int var217 = 0; var217 < 15; var217++) {
        var217 += 1;
    }    for (int var84 = 0; var84 < 13; var84++) {
        var84 += 2;
    }    int var774 = 0;
    while (var774 < 9) {
        var774 += 5;
        var774++;
    }    for (int var166 = 0; var166 < 6; var166++) {
        var166 += 2;
    }

    int var67 = 84;
    if (var67 % 2 == 0) {
        printf("var67 is even\n");
    } else {
        printf("var67 is odd\n");
    }

    return 0;
}
