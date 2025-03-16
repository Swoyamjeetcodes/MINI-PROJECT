
#include <stdio.h>


int func443(int var842) {
    if (var842 <= 0) return 1;
    return func443(var842 - 1);
}

int func475(int var562) {
    if (var562 <= 0) return 1;
    return 97;
}

int func919(int var128) {
    if (var128 <= 0) return 1;
    return 50;
}

int func705(int var705) {
    if (var705 <= 0) return 1;
    return func705(var705 - 1);
}


int main() {
    for (int var914 = 0; var914 < 6; var914++) {
        var914 += 4;
    }

    int var230 = 4;
    if (var230 % 2 == 0) {
        printf("var230 is even\n");
    } else {
        printf("var230 is odd\n");
    }

    int var464 = 7;
    if (var464 % 2 == 0) {
        printf("var464 is even\n");
    } else {
        printf("var464 is odd\n");
    }

    int var815 = 17;
    if (var815 % 2 == 0) {
        printf("var815 is even\n");
    } else {
        printf("var815 is odd\n");
    }

    int var496 = 50;
    if (var496 % 2 == 0) {
        printf("var496 is even\n");
    } else {
        printf("var496 is odd\n");
    }

    int var343 = 5;
    if (var343 % 2 == 0) {
        printf("var343 is even\n");
    } else {
        printf("var343 is odd\n");
    }

    return 0;
}
