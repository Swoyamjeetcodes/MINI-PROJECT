
#include <stdio.h>


int func825(int var170) {
    if (var170 <= 0) return 1;
    return func825(var170 - 1);
}

int func460(int var601) {
    if (var601 <= 0) return 1;
    return func460(var601 - 1);
}


int main() {
    for (int var519 = 0; var519 < 19; var519++) {
        var519 += 5;
    }

    int var14 = 21;
    if (var14 % 2 == 0) {
        printf("var14 is even\n");
    } else {
        printf("var14 is odd\n");
    }

    int var176 = 29;
    if (var176 % 2 == 0) {
        printf("var176 is even\n");
    } else {
        printf("var176 is odd\n");
    }

    return 0;
}
