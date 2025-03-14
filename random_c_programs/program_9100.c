
#include <stdio.h>


int func825(int var838) {
    if (var838 <= 0) return 1;
    return func825(var838 - 1);
}

int func459(int var486) {
    if (var486 <= 0) return 1;
    return func459(var486 - 1);
}

int func827(int var203) {
    if (var203 <= 0) return 1;
    return func827(var203 - 1);
}


int main() {
    int var58 = 0;
    while (var58 < 7) {
        var58 += 3;
        var58++;
    }    int var731 = 0;
    while (var731 < 13) {
        var731 += 1;
        var731++;
    }    for (int var582 = 0; var582 < 16; var582++) {
        var582 += 5;
    }

    int var104 = 20;
    if (var104 % 2 == 0) {
        printf("var104 is even\n");
    } else {
        printf("var104 is odd\n");
    }

    return 0;
}
