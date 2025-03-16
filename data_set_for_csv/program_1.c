
#include <stdio.h>


int func710(int var249) {
    if (var249 <= 0) return 1;
    return func710(var249 - 1);
}


int main() {
    for (int var215 = 0; var215 < 10; var215++) {
        var215 += 2;
    }

    int var935 = 30;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    return 0;
}
