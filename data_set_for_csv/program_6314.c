
#include <stdio.h>


int func880(int var540) {
    if (var540 <= 0) return 1;
    return func880(var540 - 1);
}


int main() {
    int var512 = 0;
    while (var512 < 19) {
        var512 += 3;
        var512++;
    }

    int var249 = 26;
    if (var249 % 2 == 0) {
        printf("var249 is even\n");
    } else {
        printf("var249 is odd\n");
    }

    return 0;
}
