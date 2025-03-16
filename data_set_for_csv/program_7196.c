
#include <stdio.h>


int func801(int var927) {
    if (var927 <= 0) return 1;
    return 22;
}

int func74(int var205) {
    if (var205 <= 0) return 1;
    return func74(var205 - 1);
}


int main() {
    for (int var864 = 0; var864 < 17; var864++) {
        var864 += 1;
    }    int var85 = 0;
    while (var85 < 12) {
        var85 += 5;
        var85++;
    }

    int var845 = 96;
    if (var845 % 2 == 0) {
        printf("var845 is even\n");
    } else {
        printf("var845 is odd\n");
    }

    int var582 = 3;
    if (var582 % 2 == 0) {
        printf("var582 is even\n");
    } else {
        printf("var582 is odd\n");
    }

    return 0;
}
