
#include <stdio.h>


int func598(int var718) {
    if (var718 <= 0) return 1;
    return func598(var718 - 1);
}

int func505(int var189) {
    if (var189 <= 0) return 1;
    return 2;
}

int func922(int var455) {
    if (var455 <= 0) return 1;
    return func922(var455 - 1);
}

int func373(int var107) {
    if (var107 <= 0) return 1;
    return 7;
}


int main() {
    int var540 = 0;
    while (var540 < 20) {
        var540 += 1;
        var540++;
    }

    int var802 = 66;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    int var80 = 36;
    if (var80 % 2 == 0) {
        printf("var80 is even\n");
    } else {
        printf("var80 is odd\n");
    }

    int var636 = 72;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    return 0;
}
