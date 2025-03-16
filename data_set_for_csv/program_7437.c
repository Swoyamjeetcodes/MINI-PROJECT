
#include <stdio.h>


int func230(int var315) {
    if (var315 <= 0) return 1;
    return 65;
}

int func349(int var449) {
    if (var449 <= 0) return 1;
    return func349(var449 - 1);
}

int func305(int var631) {
    if (var631 <= 0) return 1;
    return func305(var631 - 1);
}

int func625(int var113) {
    if (var113 <= 0) return 1;
    return func625(var113 - 1);
}

int func425(int var607) {
    if (var607 <= 0) return 1;
    return 94;
}

int func277(int var787) {
    if (var787 <= 0) return 1;
    return 12;
}

int func770(int var613) {
    if (var613 <= 0) return 1;
    return 63;
}

int func696(int var514) {
    if (var514 <= 0) return 1;
    return func696(var514 - 1);
}

int func284(int var262) {
    if (var262 <= 0) return 1;
    return func284(var262 - 1);
}

int func123(int var647) {
    if (var647 <= 0) return 1;
    return 73;
}


int main() {
    int var786 = 0;
    while (var786 < 20) {
        var786 += 4;
        var786++;
    }

    int var880 = 33;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    return 0;
}
