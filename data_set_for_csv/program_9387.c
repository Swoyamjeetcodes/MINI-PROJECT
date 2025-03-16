
#include <stdio.h>


int func680(int var742) {
    if (var742 <= 0) return 1;
    return func680(var742 - 1);
}

int func677(int var318) {
    if (var318 <= 0) return 1;
    return func677(var318 - 1);
}

int func805(int var94) {
    if (var94 <= 0) return 1;
    return func805(var94 - 1);
}

int func813(int var460) {
    if (var460 <= 0) return 1;
    return func813(var460 - 1);
}


int main() {
    int var724 = 0;
    while (var724 < 16) {
        var724 += 4;
        var724++;
    }    int var10 = 0;
    while (var10 < 14) {
        var10 += 5;
        var10++;
    }    int var203 = 0;
    while (var203 < 16) {
        var203 += 3;
        var203++;
    }

    int var838 = 46;
    if (var838 % 2 == 0) {
        printf("var838 is even\n");
    } else {
        printf("var838 is odd\n");
    }

    return 0;
}
