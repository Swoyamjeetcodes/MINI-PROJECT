
#include <stdio.h>


int func892(int var950) {
    if (var950 <= 0) return 1;
    return func892(var950 - 1);
}


int main() {
    int var227 = 0;
    while (var227 < 14) {
        var227 += 3;
        var227++;
    }

    int var417 = 75;
    if (var417 % 2 == 0) {
        printf("var417 is even\n");
    } else {
        printf("var417 is odd\n");
    }

    return 0;
}
