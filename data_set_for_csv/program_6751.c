
#include <stdio.h>


int func922(int var260) {
    if (var260 <= 0) return 1;
    return 83;
}

int func916(int var308) {
    if (var308 <= 0) return 1;
    return func916(var308 - 1);
}

int func279(int var994) {
    if (var994 <= 0) return 1;
    return func279(var994 - 1);
}


int main() {
    for (int var626 = 0; var626 < 12; var626++) {
        var626 += 1;
    }    for (int var36 = 0; var36 < 8; var36++) {
        var36 += 1;
    }    for (int var186 = 0; var186 < 13; var186++) {
        var186 += 1;
    }

    int var574 = 16;
    if (var574 % 2 == 0) {
        printf("var574 is even\n");
    } else {
        printf("var574 is odd\n");
    }

    return 0;
}
