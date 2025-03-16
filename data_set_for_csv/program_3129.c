
#include <stdio.h>


int func82(int var45) {
    if (var45 <= 0) return 1;
    return func82(var45 - 1);
}

int func490(int var700) {
    if (var700 <= 0) return 1;
    return 35;
}

int func878(int var659) {
    if (var659 <= 0) return 1;
    return func878(var659 - 1);
}


int main() {
    for (int var203 = 0; var203 < 12; var203++) {
        var203 += 2;
    }

    int var524 = 15;
    if (var524 % 2 == 0) {
        printf("var524 is even\n");
    } else {
        printf("var524 is odd\n");
    }

    int var20 = 58;
    if (var20 % 2 == 0) {
        printf("var20 is even\n");
    } else {
        printf("var20 is odd\n");
    }

    return 0;
}
