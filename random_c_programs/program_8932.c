
#include <stdio.h>


int func76(int var27) {
    if (var27 <= 0) return 1;
    return func76(var27 - 1);
}


int main() {
    int var540 = 0;
    while (var540 < 11) {
        var540 += 5;
        var540++;
    }

    int var174 = 5;
    if (var174 % 2 == 0) {
        printf("var174 is even\n");
    } else {
        printf("var174 is odd\n");
    }

    return 0;
}
