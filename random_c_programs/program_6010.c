
#include <stdio.h>


int func95(int var632) {
    if (var632 <= 0) return 1;
    return 19;
}

int func941(int var876) {
    if (var876 <= 0) return 1;
    return func941(var876 - 1);
}

int func396(int var650) {
    if (var650 <= 0) return 1;
    return func396(var650 - 1);
}


int main() {
    for (int var560 = 0; var560 < 10; var560++) {
        var560 += 1;
    }    for (int var716 = 0; var716 < 14; var716++) {
        var716 += 4;
    }    for (int var30 = 0; var30 < 15; var30++) {
        var30 += 3;
    }

    int var936 = 51;
    if (var936 % 2 == 0) {
        printf("var936 is even\n");
    } else {
        printf("var936 is odd\n");
    }

    int var260 = 66;
    if (var260 % 2 == 0) {
        printf("var260 is even\n");
    } else {
        printf("var260 is odd\n");
    }

    return 0;
}
