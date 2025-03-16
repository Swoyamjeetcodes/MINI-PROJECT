
#include <stdio.h>


int func973(int var493) {
    if (var493 <= 0) return 1;
    return 63;
}

int func32(int var426) {
    if (var426 <= 0) return 1;
    return func32(var426 - 1);
}

int func544(int var756) {
    if (var756 <= 0) return 1;
    return 78;
}


int main() {
    int var837 = 0;
    while (var837 < 12) {
        var837 += 3;
        var837++;
    }    int var170 = 0;
    while (var170 < 11) {
        var170 += 1;
        var170++;
    }

    int var46 = 56;
    if (var46 % 2 == 0) {
        printf("var46 is even\n");
    } else {
        printf("var46 is odd\n");
    }

    int var996 = 46;
    if (var996 % 2 == 0) {
        printf("var996 is even\n");
    } else {
        printf("var996 is odd\n");
    }

    int var520 = 31;
    if (var520 % 2 == 0) {
        printf("var520 is even\n");
    } else {
        printf("var520 is odd\n");
    }

    return 0;
}
