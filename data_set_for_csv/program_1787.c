
#include <stdio.h>


int func456(int var801) {
    if (var801 <= 0) return 1;
    return 5;
}

int func672(int var927) {
    if (var927 <= 0) return 1;
    return 28;
}

int func918(int var81) {
    if (var81 <= 0) return 1;
    return func918(var81 - 1);
}

int func778(int var327) {
    if (var327 <= 0) return 1;
    return 42;
}

int func301(int var153) {
    if (var153 <= 0) return 1;
    return func301(var153 - 1);
}

int func836(int var35) {
    if (var35 <= 0) return 1;
    return func836(var35 - 1);
}

int func794(int var986) {
    if (var986 <= 0) return 1;
    return 34;
}

int func571(int var716) {
    if (var716 <= 0) return 1;
    return func571(var716 - 1);
}

int func340(int var119) {
    if (var119 <= 0) return 1;
    return func340(var119 - 1);
}

int func761(int var962) {
    if (var962 <= 0) return 1;
    return func761(var962 - 1);
}

int func625(int var692) {
    if (var692 <= 0) return 1;
    return func625(var692 - 1);
}

int func103(int var482) {
    if (var482 <= 0) return 1;
    return func103(var482 - 1);
}


int main() {
    for (int var755 = 0; var755 < 8; var755++) {
        var755 += 3;
    }    int var976 = 0;
    while (var976 < 15) {
        var976 += 3;
        var976++;
    }    for (int var300 = 0; var300 < 16; var300++) {
        var300 += 1;
    }

    int var380 = 64;
    if (var380 % 2 == 0) {
        printf("var380 is even\n");
    } else {
        printf("var380 is odd\n");
    }

    return 0;
}
