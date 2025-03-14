
#include <stdio.h>


int func159(int var972) {
    if (var972 <= 0) return 1;
    return 72;
}

int func351(int var515) {
    if (var515 <= 0) return 1;
    return func351(var515 - 1);
}

int func739(int var79) {
    if (var79 <= 0) return 1;
    return func739(var79 - 1);
}

int func241(int var158) {
    if (var158 <= 0) return 1;
    return 30;
}

int func317(int var975) {
    if (var975 <= 0) return 1;
    return 94;
}

int func59(int var668) {
    if (var668 <= 0) return 1;
    return func59(var668 - 1);
}

int func104(int var202) {
    if (var202 <= 0) return 1;
    return 1;
}

int func467(int var228) {
    if (var228 <= 0) return 1;
    return func467(var228 - 1);
}

int func151(int var119) {
    if (var119 <= 0) return 1;
    return func151(var119 - 1);
}


int main() {
    for (int var646 = 0; var646 < 16; var646++) {
        var646 += 5;
    }    int var345 = 0;
    while (var345 < 16) {
        var345 += 5;
        var345++;
    }

    int var882 = 90;
    if (var882 % 2 == 0) {
        printf("var882 is even\n");
    } else {
        printf("var882 is odd\n");
    }

    int var897 = 66;
    if (var897 % 2 == 0) {
        printf("var897 is even\n");
    } else {
        printf("var897 is odd\n");
    }

    int var455 = 77;
    if (var455 % 2 == 0) {
        printf("var455 is even\n");
    } else {
        printf("var455 is odd\n");
    }

    int var383 = 90;
    if (var383 % 2 == 0) {
        printf("var383 is even\n");
    } else {
        printf("var383 is odd\n");
    }

    return 0;
}
