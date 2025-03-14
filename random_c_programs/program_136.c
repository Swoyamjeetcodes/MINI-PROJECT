
#include <stdio.h>


int func103(int var428) {
    if (var428 <= 0) return 1;
    return func103(var428 - 1);
}

int func171(int var244) {
    if (var244 <= 0) return 1;
    return func171(var244 - 1);
}

int func218(int var990) {
    if (var990 <= 0) return 1;
    return func218(var990 - 1);
}


int main() {
    for (int var366 = 0; var366 < 15; var366++) {
        var366 += 3;
    }    int var984 = 0;
    while (var984 < 11) {
        var984 += 4;
        var984++;
    }    int var785 = 0;
    while (var785 < 6) {
        var785 += 4;
        var785++;
    }

    int var569 = 58;
    if (var569 % 2 == 0) {
        printf("var569 is even\n");
    } else {
        printf("var569 is odd\n");
    }

    int var782 = 48;
    if (var782 % 2 == 0) {
        printf("var782 is even\n");
    } else {
        printf("var782 is odd\n");
    }

    return 0;
}
