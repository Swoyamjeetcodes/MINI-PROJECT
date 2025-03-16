
#include <stdio.h>


int func468(int var585) {
    if (var585 <= 0) return 1;
    return func468(var585 - 1);
}


int main() {
    int var827 = 0;
    while (var827 < 9) {
        var827 += 3;
        var827++;
    }    int var818 = 0;
    while (var818 < 6) {
        var818 += 2;
        var818++;
    }

    int var165 = 7;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    int var139 = 94;
    if (var139 % 2 == 0) {
        printf("var139 is even\n");
    } else {
        printf("var139 is odd\n");
    }

    return 0;
}
