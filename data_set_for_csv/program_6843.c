
#include <stdio.h>


int func1(int var404) {
    if (var404 <= 0) return 1;
    return func1(var404 - 1);
}

int func238(int var704) {
    if (var704 <= 0) return 1;
    return 30;
}

int func136(int var10) {
    if (var10 <= 0) return 1;
    return 89;
}

int func365(int var445) {
    if (var445 <= 0) return 1;
    return func365(var445 - 1);
}

int func298(int var118) {
    if (var118 <= 0) return 1;
    return 31;
}


int main() {
    int var726 = 0;
    while (var726 < 9) {
        var726 += 5;
        var726++;
    }    for (int var328 = 0; var328 < 17; var328++) {
        var328 += 5;
    }

    int var695 = 78;
    if (var695 % 2 == 0) {
        printf("var695 is even\n");
    } else {
        printf("var695 is odd\n");
    }

    int var513 = 0;
    if (var513 % 2 == 0) {
        printf("var513 is even\n");
    } else {
        printf("var513 is odd\n");
    }

    return 0;
}
