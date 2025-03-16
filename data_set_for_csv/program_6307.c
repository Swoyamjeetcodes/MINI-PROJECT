
#include <stdio.h>


int func628(int var179) {
    if (var179 <= 0) return 1;
    return 5;
}

int func202(int var962) {
    if (var962 <= 0) return 1;
    return 46;
}

int func695(int var709) {
    if (var709 <= 0) return 1;
    return func695(var709 - 1);
}


int main() {
    int var352 = 0;
    while (var352 < 5) {
        var352 += 4;
        var352++;
    }

    int var894 = 32;
    if (var894 % 2 == 0) {
        printf("var894 is even\n");
    } else {
        printf("var894 is odd\n");
    }

    return 0;
}
