
#include <stdio.h>


int func29(int var792) {
    if (var792 <= 0) return 1;
    return 16;
}

int func195(int var276) {
    if (var276 <= 0) return 1;
    return func195(var276 - 1);
}


int main() {
    for (int var359 = 0; var359 < 18; var359++) {
        var359 += 3;
    }    for (int var678 = 0; var678 < 20; var678++) {
        var678 += 4;
    }    for (int var460 = 0; var460 < 11; var460++) {
        var460 += 3;
    }

    int var910 = 94;
    if (var910 % 2 == 0) {
        printf("var910 is even\n");
    } else {
        printf("var910 is odd\n");
    }

    int var709 = 18;
    if (var709 % 2 == 0) {
        printf("var709 is even\n");
    } else {
        printf("var709 is odd\n");
    }

    return 0;
}
