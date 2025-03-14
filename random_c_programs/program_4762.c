
#include <stdio.h>


int func896(int var817) {
    if (var817 <= 0) return 1;
    return func896(var817 - 1);
}

int func478(int var532) {
    if (var532 <= 0) return 1;
    return func478(var532 - 1);
}

int func316(int var595) {
    if (var595 <= 0) return 1;
    return func316(var595 - 1);
}

int func7(int var176) {
    if (var176 <= 0) return 1;
    return 46;
}


int main() {
    for (int var172 = 0; var172 < 8; var172++) {
        var172 += 3;
    }

    int var918 = 95;
    if (var918 % 2 == 0) {
        printf("var918 is even\n");
    } else {
        printf("var918 is odd\n");
    }

    return 0;
}
