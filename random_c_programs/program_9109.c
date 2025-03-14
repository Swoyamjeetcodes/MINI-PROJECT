
#include <stdio.h>


int func884(int var579) {
    if (var579 <= 0) return 1;
    return 10;
}

int func460(int var954) {
    if (var954 <= 0) return 1;
    return func460(var954 - 1);
}

int func559(int var239) {
    if (var239 <= 0) return 1;
    return 27;
}


int main() {
    for (int var726 = 0; var726 < 18; var726++) {
        var726 += 2;
    }    for (int var817 = 0; var817 < 18; var817++) {
        var817 += 1;
    }

    int var902 = 63;
    if (var902 % 2 == 0) {
        printf("var902 is even\n");
    } else {
        printf("var902 is odd\n");
    }

    int var914 = 30;
    if (var914 % 2 == 0) {
        printf("var914 is even\n");
    } else {
        printf("var914 is odd\n");
    }

    int var978 = 19;
    if (var978 % 2 == 0) {
        printf("var978 is even\n");
    } else {
        printf("var978 is odd\n");
    }

    return 0;
}
