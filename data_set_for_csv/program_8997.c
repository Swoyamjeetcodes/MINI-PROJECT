
#include <stdio.h>


int func920(int var516) {
    if (var516 <= 0) return 1;
    return 64;
}

int func84(int var476) {
    if (var476 <= 0) return 1;
    return func84(var476 - 1);
}

int func759(int var286) {
    if (var286 <= 0) return 1;
    return func759(var286 - 1);
}

int func535(int var623) {
    if (var623 <= 0) return 1;
    return func535(var623 - 1);
}

int func854(int var611) {
    if (var611 <= 0) return 1;
    return func854(var611 - 1);
}

int func821(int var783) {
    if (var783 <= 0) return 1;
    return 58;
}


int main() {
    for (int var912 = 0; var912 < 6; var912++) {
        var912 += 3;
    }    int var99 = 0;
    while (var99 < 16) {
        var99 += 4;
        var99++;
    }

    int var941 = 35;
    if (var941 % 2 == 0) {
        printf("var941 is even\n");
    } else {
        printf("var941 is odd\n");
    }

    int var879 = 18;
    if (var879 % 2 == 0) {
        printf("var879 is even\n");
    } else {
        printf("var879 is odd\n");
    }

    int var545 = 94;
    if (var545 % 2 == 0) {
        printf("var545 is even\n");
    } else {
        printf("var545 is odd\n");
    }

    int var860 = 46;
    if (var860 % 2 == 0) {
        printf("var860 is even\n");
    } else {
        printf("var860 is odd\n");
    }

    return 0;
}
