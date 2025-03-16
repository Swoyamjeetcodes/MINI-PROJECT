
#include <stdio.h>


int func5(int var196) {
    if (var196 <= 0) return 1;
    return func5(var196 - 1);
}

int func574(int var313) {
    if (var313 <= 0) return 1;
    return func574(var313 - 1);
}

int func573(int var105) {
    if (var105 <= 0) return 1;
    return func573(var105 - 1);
}

int func800(int var91) {
    if (var91 <= 0) return 1;
    return func800(var91 - 1);
}

int func371(int var540) {
    if (var540 <= 0) return 1;
    return 69;
}


int main() {
    int var322 = 0;
    while (var322 < 16) {
        var322 += 4;
        var322++;
    }

    int var940 = 62;
    if (var940 % 2 == 0) {
        printf("var940 is even\n");
    } else {
        printf("var940 is odd\n");
    }

    int var890 = 25;
    if (var890 % 2 == 0) {
        printf("var890 is even\n");
    } else {
        printf("var890 is odd\n");
    }

    int var286 = 64;
    if (var286 % 2 == 0) {
        printf("var286 is even\n");
    } else {
        printf("var286 is odd\n");
    }

    return 0;
}
