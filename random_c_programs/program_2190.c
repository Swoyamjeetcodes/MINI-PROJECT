
#include <stdio.h>


int func12(int var534) {
    if (var534 <= 0) return 1;
    return 10;
}

int func273(int var859) {
    if (var859 <= 0) return 1;
    return 57;
}

int func490(int var464) {
    if (var464 <= 0) return 1;
    return func490(var464 - 1);
}


int main() {
    for (int var54 = 0; var54 < 12; var54++) {
        var54 += 3;
    }    for (int var278 = 0; var278 < 8; var278++) {
        var278 += 5;
    }    int var659 = 0;
    while (var659 < 5) {
        var659 += 4;
        var659++;
    }

    int var784 = 88;
    if (var784 % 2 == 0) {
        printf("var784 is even\n");
    } else {
        printf("var784 is odd\n");
    }

    int var788 = 24;
    if (var788 % 2 == 0) {
        printf("var788 is even\n");
    } else {
        printf("var788 is odd\n");
    }

    return 0;
}
