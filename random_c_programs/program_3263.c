
#include <stdio.h>


int func28(int var810) {
    if (var810 <= 0) return 1;
    return func28(var810 - 1);
}

int func354(int var213) {
    if (var213 <= 0) return 1;
    return 15;
}

int func776(int var815) {
    if (var815 <= 0) return 1;
    return func776(var815 - 1);
}

int func934(int var205) {
    if (var205 <= 0) return 1;
    return func934(var205 - 1);
}


int main() {
    for (int var244 = 0; var244 < 11; var244++) {
        var244 += 3;
    }

    int var422 = 44;
    if (var422 % 2 == 0) {
        printf("var422 is even\n");
    } else {
        printf("var422 is odd\n");
    }

    int var492 = 17;
    if (var492 % 2 == 0) {
        printf("var492 is even\n");
    } else {
        printf("var492 is odd\n");
    }

    return 0;
}
