
#include <stdio.h>


int func707(int var712) {
    if (var712 <= 0) return 1;
    return func707(var712 - 1);
}

int func172(int var592) {
    if (var592 <= 0) return 1;
    return func172(var592 - 1);
}


int main() {
    int var10 = 0;
    while (var10 < 17) {
        var10 += 1;
        var10++;
    }

    int var453 = 6;
    if (var453 % 2 == 0) {
        printf("var453 is even\n");
    } else {
        printf("var453 is odd\n");
    }

    int var307 = 19;
    if (var307 % 2 == 0) {
        printf("var307 is even\n");
    } else {
        printf("var307 is odd\n");
    }

    return 0;
}
