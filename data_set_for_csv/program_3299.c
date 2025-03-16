
#include <stdio.h>


int func428(int var589) {
    if (var589 <= 0) return 1;
    return func428(var589 - 1);
}

int func932(int var780) {
    if (var780 <= 0) return 1;
    return func932(var780 - 1);
}


int main() {
    int var798 = 0;
    while (var798 < 10) {
        var798 += 5;
        var798++;
    }    int var954 = 0;
    while (var954 < 15) {
        var954 += 2;
        var954++;
    }    for (int var791 = 0; var791 < 17; var791++) {
        var791 += 2;
    }

    int var629 = 84;
    if (var629 % 2 == 0) {
        printf("var629 is even\n");
    } else {
        printf("var629 is odd\n");
    }

    int var622 = 26;
    if (var622 % 2 == 0) {
        printf("var622 is even\n");
    } else {
        printf("var622 is odd\n");
    }

    int var934 = 65;
    if (var934 % 2 == 0) {
        printf("var934 is even\n");
    } else {
        printf("var934 is odd\n");
    }

    return 0;
}
