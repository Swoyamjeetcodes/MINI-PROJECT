
#include <stdio.h>


int func748(int var291) {
    if (var291 <= 0) return 1;
    return 37;
}

int func805(int var860) {
    if (var860 <= 0) return 1;
    return 46;
}

int func326(int var185) {
    if (var185 <= 0) return 1;
    return 52;
}

int func543(int var289) {
    if (var289 <= 0) return 1;
    return func543(var289 - 1);
}

int func83(int var437) {
    if (var437 <= 0) return 1;
    return 44;
}


int main() {
    int var56 = 0;
    while (var56 < 17) {
        var56 += 2;
        var56++;
    }    int var52 = 0;
    while (var52 < 18) {
        var52 += 4;
        var52++;
    }    for (int var26 = 0; var26 < 20; var26++) {
        var26 += 5;
    }

    int var471 = 76;
    if (var471 % 2 == 0) {
        printf("var471 is even\n");
    } else {
        printf("var471 is odd\n");
    }

    int var845 = 9;
    if (var845 % 2 == 0) {
        printf("var845 is even\n");
    } else {
        printf("var845 is odd\n");
    }

    int var850 = 34;
    if (var850 % 2 == 0) {
        printf("var850 is even\n");
    } else {
        printf("var850 is odd\n");
    }

    int var43 = 25;
    if (var43 % 2 == 0) {
        printf("var43 is even\n");
    } else {
        printf("var43 is odd\n");
    }

    return 0;
}
