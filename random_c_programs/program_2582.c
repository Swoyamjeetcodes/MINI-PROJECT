
#include <stdio.h>


int func807(int var906) {
    if (var906 <= 0) return 1;
    return func807(var906 - 1);
}

int func738(int var448) {
    if (var448 <= 0) return 1;
    return func738(var448 - 1);
}

int func717(int var159) {
    if (var159 <= 0) return 1;
    return func717(var159 - 1);
}

int func664(int var594) {
    if (var594 <= 0) return 1;
    return 55;
}

int func249(int var234) {
    if (var234 <= 0) return 1;
    return 78;
}


int main() {
    int var161 = 0;
    while (var161 < 13) {
        var161 += 5;
        var161++;
    }    int var45 = 0;
    while (var45 < 9) {
        var45 += 3;
        var45++;
    }    int var616 = 0;
    while (var616 < 17) {
        var616 += 2;
        var616++;
    }

    int var245 = 79;
    if (var245 % 2 == 0) {
        printf("var245 is even\n");
    } else {
        printf("var245 is odd\n");
    }

    int var205 = 23;
    if (var205 % 2 == 0) {
        printf("var205 is even\n");
    } else {
        printf("var205 is odd\n");
    }

    int var301 = 57;
    if (var301 % 2 == 0) {
        printf("var301 is even\n");
    } else {
        printf("var301 is odd\n");
    }

    return 0;
}
