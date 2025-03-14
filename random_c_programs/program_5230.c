
#include <stdio.h>


int func391(int var697) {
    if (var697 <= 0) return 1;
    return func391(var697 - 1);
}


int main() {
    int var249 = 0;
    while (var249 < 14) {
        var249 += 5;
        var249++;
    }

    int var384 = 58;
    if (var384 % 2 == 0) {
        printf("var384 is even\n");
    } else {
        printf("var384 is odd\n");
    }

    return 0;
}
