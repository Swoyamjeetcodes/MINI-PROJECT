
#include <stdio.h>


int func18(int var527) {
    if (var527 <= 0) return 1;
    return func18(var527 - 1);
}


int main() {
    for (int var383 = 0; var383 < 10; var383++) {
        var383 += 3;
    }

    int var276 = 46;
    if (var276 % 2 == 0) {
        printf("var276 is even\n");
    } else {
        printf("var276 is odd\n");
    }

    return 0;
}
