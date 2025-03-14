
#include <stdio.h>


int func539(int var650) {
    if (var650 <= 0) return 1;
    return func539(var650 - 1);
}

int func462(int var985) {
    if (var985 <= 0) return 1;
    return func462(var985 - 1);
}

int func523(int var147) {
    if (var147 <= 0) return 1;
    return func523(var147 - 1);
}

int func569(int var492) {
    if (var492 <= 0) return 1;
    return 45;
}

int func760(int var176) {
    if (var176 <= 0) return 1;
    return 35;
}

int func276(int var198) {
    if (var198 <= 0) return 1;
    return func276(var198 - 1);
}

int func968(int var339) {
    if (var339 <= 0) return 1;
    return func968(var339 - 1);
}


int main() {
    for (int var836 = 0; var836 < 19; var836++) {
        var836 += 2;
    }

    int var104 = 6;
    if (var104 % 2 == 0) {
        printf("var104 is even\n");
    } else {
        printf("var104 is odd\n");
    }

    int var664 = 58;
    if (var664 % 2 == 0) {
        printf("var664 is even\n");
    } else {
        printf("var664 is odd\n");
    }

    return 0;
}
