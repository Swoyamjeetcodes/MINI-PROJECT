
#include <stdio.h>


int func482(int var968) {
    if (var968 <= 0) return 1;
    return func482(var968 - 1);
}


int main() {
    int var245 = 0;
    while (var245 < 6) {
        var245 += 5;
        var245++;
    }

    int var211 = 20;
    if (var211 % 2 == 0) {
        printf("var211 is even\n");
    } else {
        printf("var211 is odd\n");
    }

    return 0;
}
