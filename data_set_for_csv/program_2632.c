
#include <stdio.h>


int func117(int var786) {
    if (var786 <= 0) return 1;
    return func117(var786 - 1);
}


int main() {
    for (int var211 = 0; var211 < 9; var211++) {
        var211 += 3;
    }

    int var276 = 90;
    if (var276 % 2 == 0) {
        printf("var276 is even\n");
    } else {
        printf("var276 is odd\n");
    }

    return 0;
}
