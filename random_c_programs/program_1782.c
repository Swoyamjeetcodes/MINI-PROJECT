
#include <stdio.h>


int func559(int var812) {
    if (var812 <= 0) return 1;
    return func559(var812 - 1);
}

int func316(int var613) {
    if (var613 <= 0) return 1;
    return func316(var613 - 1);
}

int func612(int var386) {
    if (var386 <= 0) return 1;
    return func612(var386 - 1);
}

int func89(int var276) {
    if (var276 <= 0) return 1;
    return 99;
}

int func937(int var844) {
    if (var844 <= 0) return 1;
    return 37;
}


int main() {
    int var840 = 0;
    while (var840 < 9) {
        var840 += 2;
        var840++;
    }

    int var279 = 24;
    if (var279 % 2 == 0) {
        printf("var279 is even\n");
    } else {
        printf("var279 is odd\n");
    }

    return 0;
}
