
#include <stdio.h>


int func558(int var2) {
    if (var2 <= 0) return 1;
    return func558(var2 - 1);
}

int func900(int var915) {
    if (var915 <= 0) return 1;
    return 12;
}

int func452(int var203) {
    if (var203 <= 0) return 1;
    return func452(var203 - 1);
}

int func100(int var95) {
    if (var95 <= 0) return 1;
    return 49;
}


int main() {
    for (int var74 = 0; var74 < 15; var74++) {
        var74 += 5;
    }    for (int var323 = 0; var323 < 12; var323++) {
        var323 += 2;
    }    int var894 = 0;
    while (var894 < 18) {
        var894 += 4;
        var894++;
    }

    int var43 = 91;
    if (var43 % 2 == 0) {
        printf("var43 is even\n");
    } else {
        printf("var43 is odd\n");
    }

    int var486 = 27;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    return 0;
}
