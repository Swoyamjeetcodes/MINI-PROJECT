
#include <stdio.h>


int func583(int var709) {
    if (var709 <= 0) return 1;
    return func583(var709 - 1);
}

int func652(int var869) {
    if (var869 <= 0) return 1;
    return func652(var869 - 1);
}


int main() {
    int var563 = 0;
    while (var563 < 10) {
        var563 += 4;
        var563++;
    }    for (int var407 = 0; var407 < 14; var407++) {
        var407 += 4;
    }    for (int var956 = 0; var956 < 10; var956++) {
        var956 += 2;
    }

    int var848 = 56;
    if (var848 % 2 == 0) {
        printf("var848 is even\n");
    } else {
        printf("var848 is odd\n");
    }

    int var149 = 35;
    if (var149 % 2 == 0) {
        printf("var149 is even\n");
    } else {
        printf("var149 is odd\n");
    }

    int var924 = 30;
    if (var924 % 2 == 0) {
        printf("var924 is even\n");
    } else {
        printf("var924 is odd\n");
    }

    int var195 = 97;
    if (var195 % 2 == 0) {
        printf("var195 is even\n");
    } else {
        printf("var195 is odd\n");
    }

    int var860 = 89;
    if (var860 % 2 == 0) {
        printf("var860 is even\n");
    } else {
        printf("var860 is odd\n");
    }

    return 0;
}
