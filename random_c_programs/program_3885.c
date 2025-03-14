
#include <stdio.h>


int func949(int var61) {
    if (var61 <= 0) return 1;
    return func949(var61 - 1);
}


int main() {
    for (int var917 = 0; var917 < 8; var917++) {
        var917 += 2;
    }    for (int var207 = 0; var207 < 19; var207++) {
        var207 += 4;
    }    for (int var797 = 0; var797 < 6; var797++) {
        var797 += 2;
    }

    int var175 = 43;
    if (var175 % 2 == 0) {
        printf("var175 is even\n");
    } else {
        printf("var175 is odd\n");
    }

    int var890 = 95;
    if (var890 % 2 == 0) {
        printf("var890 is even\n");
    } else {
        printf("var890 is odd\n");
    }

    int var841 = 47;
    if (var841 % 2 == 0) {
        printf("var841 is even\n");
    } else {
        printf("var841 is odd\n");
    }

    return 0;
}
