
#include <stdio.h>


int func735(int var786) {
    if (var786 <= 0) return 1;
    return 25;
}

int func35(int var416) {
    if (var416 <= 0) return 1;
    return func35(var416 - 1);
}

int func239(int var59) {
    if (var59 <= 0) return 1;
    return func239(var59 - 1);
}

int func52(int var462) {
    if (var462 <= 0) return 1;
    return 56;
}


int main() {
    int var957 = 0;
    while (var957 < 11) {
        var957 += 5;
        var957++;
    }    int var928 = 0;
    while (var928 < 8) {
        var928 += 5;
        var928++;
    }

    int var778 = 90;
    if (var778 % 2 == 0) {
        printf("var778 is even\n");
    } else {
        printf("var778 is odd\n");
    }

    int var496 = 80;
    if (var496 % 2 == 0) {
        printf("var496 is even\n");
    } else {
        printf("var496 is odd\n");
    }

    int var765 = 5;
    if (var765 % 2 == 0) {
        printf("var765 is even\n");
    } else {
        printf("var765 is odd\n");
    }

    int var82 = 73;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    return 0;
}
