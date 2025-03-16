
#include <stdio.h>


int func975(int var234) {
    if (var234 <= 0) return 1;
    return func975(var234 - 1);
}

int func379(int var27) {
    if (var27 <= 0) return 1;
    return func379(var27 - 1);
}

int func831(int var971) {
    if (var971 <= 0) return 1;
    return 55;
}

int func459(int var457) {
    if (var457 <= 0) return 1;
    return func459(var457 - 1);
}


int main() {
    for (int var641 = 0; var641 < 20; var641++) {
        var641 += 3;
    }    int var8 = 0;
    while (var8 < 17) {
        var8 += 4;
        var8++;
    }    int var798 = 0;
    while (var798 < 13) {
        var798 += 2;
        var798++;
    }

    int var983 = 10;
    if (var983 % 2 == 0) {
        printf("var983 is even\n");
    } else {
        printf("var983 is odd\n");
    }

    int var79 = 17;
    if (var79 % 2 == 0) {
        printf("var79 is even\n");
    } else {
        printf("var79 is odd\n");
    }

    int var395 = 60;
    if (var395 % 2 == 0) {
        printf("var395 is even\n");
    } else {
        printf("var395 is odd\n");
    }

    int var203 = 58;
    if (var203 % 2 == 0) {
        printf("var203 is even\n");
    } else {
        printf("var203 is odd\n");
    }

    return 0;
}
