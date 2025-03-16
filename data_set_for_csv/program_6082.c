
#include <stdio.h>


int func556(int var208) {
    if (var208 <= 0) return 1;
    return func556(var208 - 1);
}

int func920(int var959) {
    if (var959 <= 0) return 1;
    return func920(var959 - 1);
}

int func196(int var462) {
    if (var462 <= 0) return 1;
    return 48;
}

int func676(int var939) {
    if (var939 <= 0) return 1;
    return 2;
}

int func475(int var41) {
    if (var41 <= 0) return 1;
    return 1;
}


int main() {
    for (int var632 = 0; var632 < 18; var632++) {
        var632 += 5;
    }

    int var37 = 14;
    if (var37 % 2 == 0) {
        printf("var37 is even\n");
    } else {
        printf("var37 is odd\n");
    }

    int var501 = 89;
    if (var501 % 2 == 0) {
        printf("var501 is even\n");
    } else {
        printf("var501 is odd\n");
    }

    int var621 = 69;
    if (var621 % 2 == 0) {
        printf("var621 is even\n");
    } else {
        printf("var621 is odd\n");
    }

    return 0;
}
