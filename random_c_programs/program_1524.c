
#include <stdio.h>


int func837(int var759) {
    if (var759 <= 0) return 1;
    return 36;
}

int func132(int var33) {
    if (var33 <= 0) return 1;
    return func132(var33 - 1);
}

int func144(int var690) {
    if (var690 <= 0) return 1;
    return 42;
}

int func490(int var639) {
    if (var639 <= 0) return 1;
    return func490(var639 - 1);
}


int main() {
    int var895 = 0;
    while (var895 < 10) {
        var895 += 3;
        var895++;
    }    int var104 = 0;
    while (var104 < 8) {
        var104 += 1;
        var104++;
    }    int var830 = 0;
    while (var830 < 8) {
        var830 += 5;
        var830++;
    }

    int var203 = 16;
    if (var203 % 2 == 0) {
        printf("var203 is even\n");
    } else {
        printf("var203 is odd\n");
    }

    int var93 = 68;
    if (var93 % 2 == 0) {
        printf("var93 is even\n");
    } else {
        printf("var93 is odd\n");
    }

    return 0;
}
