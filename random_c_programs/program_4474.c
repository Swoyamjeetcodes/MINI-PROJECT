
#include <stdio.h>


int func270(int var344) {
    if (var344 <= 0) return 1;
    return 64;
}

int func970(int var519) {
    if (var519 <= 0) return 1;
    return 6;
}

int func900(int var783) {
    if (var783 <= 0) return 1;
    return func900(var783 - 1);
}

int func141(int var81) {
    if (var81 <= 0) return 1;
    return func141(var81 - 1);
}

int func75(int var353) {
    if (var353 <= 0) return 1;
    return func75(var353 - 1);
}


int main() {
    for (int var890 = 0; var890 < 5; var890++) {
        var890 += 4;
    }    int var33 = 0;
    while (var33 < 9) {
        var33 += 5;
        var33++;
    }    for (int var742 = 0; var742 < 18; var742++) {
        var742 += 5;
    }

    int var486 = 11;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    int var445 = 8;
    if (var445 % 2 == 0) {
        printf("var445 is even\n");
    } else {
        printf("var445 is odd\n");
    }

    return 0;
}
