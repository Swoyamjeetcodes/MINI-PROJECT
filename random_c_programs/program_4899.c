
#include <stdio.h>


int func853(int var883) {
    if (var883 <= 0) return 1;
    return 23;
}

int func504(int var801) {
    if (var801 <= 0) return 1;
    return func504(var801 - 1);
}

int func772(int var508) {
    if (var508 <= 0) return 1;
    return 64;
}

int func166(int var928) {
    if (var928 <= 0) return 1;
    return func166(var928 - 1);
}

int func720(int var969) {
    if (var969 <= 0) return 1;
    return 97;
}


int main() {
    for (int var478 = 0; var478 < 17; var478++) {
        var478 += 5;
    }    for (int var45 = 0; var45 < 19; var45++) {
        var45 += 1;
    }    for (int var312 = 0; var312 < 8; var312++) {
        var312 += 5;
    }

    int var210 = 33;
    if (var210 % 2 == 0) {
        printf("var210 is even\n");
    } else {
        printf("var210 is odd\n");
    }

    int var608 = 2;
    if (var608 % 2 == 0) {
        printf("var608 is even\n");
    } else {
        printf("var608 is odd\n");
    }

    int var833 = 97;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    return 0;
}
