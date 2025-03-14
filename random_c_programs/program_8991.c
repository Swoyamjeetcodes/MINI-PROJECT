
#include <stdio.h>


int func519(int var911) {
    if (var911 <= 0) return 1;
    return 1;
}

int func836(int var610) {
    if (var610 <= 0) return 1;
    return func836(var610 - 1);
}

int func733(int var653) {
    if (var653 <= 0) return 1;
    return func733(var653 - 1);
}


int main() {
    for (int var871 = 0; var871 < 13; var871++) {
        var871 += 4;
    }    for (int var921 = 0; var921 < 10; var921++) {
        var921 += 2;
    }    for (int var662 = 0; var662 < 7; var662++) {
        var662 += 2;
    }

    int var824 = 60;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    return 0;
}
