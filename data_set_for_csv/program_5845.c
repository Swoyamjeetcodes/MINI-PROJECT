
#include <stdio.h>


int func44(int var568) {
    if (var568 <= 0) return 1;
    return func44(var568 - 1);
}

int func265(int var181) {
    if (var181 <= 0) return 1;
    return 16;
}

int func796(int var492) {
    if (var492 <= 0) return 1;
    return func796(var492 - 1);
}

int func822(int var474) {
    if (var474 <= 0) return 1;
    return func822(var474 - 1);
}

int func842(int var15) {
    if (var15 <= 0) return 1;
    return 7;
}


int main() {
    int var878 = 0;
    while (var878 < 14) {
        var878 += 3;
        var878++;
    }

    int var352 = 25;
    if (var352 % 2 == 0) {
        printf("var352 is even\n");
    } else {
        printf("var352 is odd\n");
    }

    return 0;
}
