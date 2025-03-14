
#include <stdio.h>


int func611(int var837) {
    if (var837 <= 0) return 1;
    return 32;
}

int func771(int var85) {
    if (var85 <= 0) return 1;
    return func771(var85 - 1);
}

int func3(int var759) {
    if (var759 <= 0) return 1;
    return func3(var759 - 1);
}

int func214(int var906) {
    if (var906 <= 0) return 1;
    return func214(var906 - 1);
}

int func580(int var321) {
    if (var321 <= 0) return 1;
    return func580(var321 - 1);
}


int main() {
    int var897 = 0;
    while (var897 < 14) {
        var897 += 4;
        var897++;
    }

    int var912 = 39;
    if (var912 % 2 == 0) {
        printf("var912 is even\n");
    } else {
        printf("var912 is odd\n");
    }

    int var975 = 75;
    if (var975 % 2 == 0) {
        printf("var975 is even\n");
    } else {
        printf("var975 is odd\n");
    }

    int var253 = 67;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    int var434 = 57;
    if (var434 % 2 == 0) {
        printf("var434 is even\n");
    } else {
        printf("var434 is odd\n");
    }

    int var742 = 59;
    if (var742 % 2 == 0) {
        printf("var742 is even\n");
    } else {
        printf("var742 is odd\n");
    }

    return 0;
}
