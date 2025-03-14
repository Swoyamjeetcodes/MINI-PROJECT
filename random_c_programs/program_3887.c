
#include <stdio.h>


int func932(int var66) {
    if (var66 <= 0) return 1;
    return func932(var66 - 1);
}

int func667(int var837) {
    if (var837 <= 0) return 1;
    return 80;
}

int func785(int var311) {
    if (var311 <= 0) return 1;
    return 25;
}

int func223(int var954) {
    if (var954 <= 0) return 1;
    return 23;
}

int func272(int var971) {
    if (var971 <= 0) return 1;
    return func272(var971 - 1);
}

int func737(int var40) {
    if (var40 <= 0) return 1;
    return func737(var40 - 1);
}


int main() {
    int var902 = 0;
    while (var902 < 6) {
        var902 += 4;
        var902++;
    }    int var643 = 0;
    while (var643 < 12) {
        var643 += 4;
        var643++;
    }    int var548 = 0;
    while (var548 < 15) {
        var548 += 5;
        var548++;
    }

    int var635 = 43;
    if (var635 % 2 == 0) {
        printf("var635 is even\n");
    } else {
        printf("var635 is odd\n");
    }

    int var961 = 58;
    if (var961 % 2 == 0) {
        printf("var961 is even\n");
    } else {
        printf("var961 is odd\n");
    }

    int var64 = 3;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    return 0;
}
