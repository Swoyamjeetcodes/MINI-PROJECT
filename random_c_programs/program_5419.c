
#include <stdio.h>


int func599(int var115) {
    if (var115 <= 0) return 1;
    return 43;
}

int func826(int var848) {
    if (var848 <= 0) return 1;
    return func826(var848 - 1);
}

int func994(int var571) {
    if (var571 <= 0) return 1;
    return func994(var571 - 1);
}

int func157(int var573) {
    if (var573 <= 0) return 1;
    return 56;
}

int func681(int var283) {
    if (var283 <= 0) return 1;
    return 8;
}


int main() {
    for (int var792 = 0; var792 < 20; var792++) {
        var792 += 2;
    }    int var123 = 0;
    while (var123 < 16) {
        var123 += 2;
        var123++;
    }

    int var103 = 73;
    if (var103 % 2 == 0) {
        printf("var103 is even\n");
    } else {
        printf("var103 is odd\n");
    }

    return 0;
}
