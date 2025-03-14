
#include <stdio.h>


int func206(int var176) {
    if (var176 <= 0) return 1;
    return 7;
}

int func567(int var185) {
    if (var185 <= 0) return 1;
    return func567(var185 - 1);
}


int main() {
    int var923 = 0;
    while (var923 < 20) {
        var923 += 4;
        var923++;
    }    int var275 = 0;
    while (var275 < 16) {
        var275 += 4;
        var275++;
    }    int var717 = 0;
    while (var717 < 6) {
        var717 += 3;
        var717++;
    }

    int var803 = 76;
    if (var803 % 2 == 0) {
        printf("var803 is even\n");
    } else {
        printf("var803 is odd\n");
    }

    int var229 = 55;
    if (var229 % 2 == 0) {
        printf("var229 is even\n");
    } else {
        printf("var229 is odd\n");
    }

    int var244 = 79;
    if (var244 % 2 == 0) {
        printf("var244 is even\n");
    } else {
        printf("var244 is odd\n");
    }

    return 0;
}
