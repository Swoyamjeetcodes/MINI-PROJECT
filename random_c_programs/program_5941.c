
#include <stdio.h>


int func236(int var354) {
    if (var354 <= 0) return 1;
    return func236(var354 - 1);
}


int main() {
    for (int var445 = 0; var445 < 10; var445++) {
        var445 += 4;
    }    int var203 = 0;
    while (var203 < 11) {
        var203 += 2;
        var203++;
    }    int var16 = 0;
    while (var16 < 12) {
        var16 += 5;
        var16++;
    }

    int var867 = 20;
    if (var867 % 2 == 0) {
        printf("var867 is even\n");
    } else {
        printf("var867 is odd\n");
    }

    int var61 = 75;
    if (var61 % 2 == 0) {
        printf("var61 is even\n");
    } else {
        printf("var61 is odd\n");
    }

    return 0;
}
