
#include <stdio.h>


int func631(int var670) {
    if (var670 <= 0) return 1;
    return func631(var670 - 1);
}

int func106(int var326) {
    if (var326 <= 0) return 1;
    return func106(var326 - 1);
}


int main() {
    for (int var802 = 0; var802 < 14; var802++) {
        var802 += 3;
    }

    int var786 = 94;
    if (var786 % 2 == 0) {
        printf("var786 is even\n");
    } else {
        printf("var786 is odd\n");
    }

    int var139 = 7;
    if (var139 % 2 == 0) {
        printf("var139 is even\n");
    } else {
        printf("var139 is odd\n");
    }

    return 0;
}
