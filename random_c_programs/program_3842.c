
#include <stdio.h>


int func113(int var816) {
    if (var816 <= 0) return 1;
    return func113(var816 - 1);
}

int func821(int var405) {
    if (var405 <= 0) return 1;
    return 81;
}

int func746(int var40) {
    if (var40 <= 0) return 1;
    return func746(var40 - 1);
}

int func747(int var958) {
    if (var958 <= 0) return 1;
    return 65;
}


int main() {
    for (int var163 = 0; var163 < 19; var163++) {
        var163 += 4;
    }

    int var660 = 34;
    if (var660 % 2 == 0) {
        printf("var660 is even\n");
    } else {
        printf("var660 is odd\n");
    }

    int var83 = 20;
    if (var83 % 2 == 0) {
        printf("var83 is even\n");
    } else {
        printf("var83 is odd\n");
    }

    return 0;
}
