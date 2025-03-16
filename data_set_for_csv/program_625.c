
#include <stdio.h>


int func613(int var619) {
    if (var619 <= 0) return 1;
    return 75;
}

int func708(int var300) {
    if (var300 <= 0) return 1;
    return 51;
}

int func577(int var104) {
    if (var104 <= 0) return 1;
    return 60;
}

int func853(int var714) {
    if (var714 <= 0) return 1;
    return func853(var714 - 1);
}

int func440(int var396) {
    if (var396 <= 0) return 1;
    return func440(var396 - 1);
}


int main() {
    for (int var73 = 0; var73 < 20; var73++) {
        var73 += 3;
    }    int var184 = 0;
    while (var184 < 14) {
        var184 += 5;
        var184++;
    }    int var722 = 0;
    while (var722 < 15) {
        var722 += 3;
        var722++;
    }

    int var155 = 42;
    if (var155 % 2 == 0) {
        printf("var155 is even\n");
    } else {
        printf("var155 is odd\n");
    }

    return 0;
}
