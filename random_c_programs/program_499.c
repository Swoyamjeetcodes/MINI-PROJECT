
#include <stdio.h>


int func626(int var111) {
    if (var111 <= 0) return 1;
    return func626(var111 - 1);
}


int main() {
    for (int var203 = 0; var203 < 6; var203++) {
        var203 += 4;
    }

    int var803 = 41;
    if (var803 % 2 == 0) {
        printf("var803 is even\n");
    } else {
        printf("var803 is odd\n");
    }

    return 0;
}
