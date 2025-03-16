
#include <stdio.h>


int func254(int var717) {
    if (var717 <= 0) return 1;
    return 46;
}

int func644(int var418) {
    if (var418 <= 0) return 1;
    return func644(var418 - 1);
}

int func668(int var406) {
    if (var406 <= 0) return 1;
    return func668(var406 - 1);
}

int func631(int var844) {
    if (var844 <= 0) return 1;
    return 31;
}


int main() {
    for (int var743 = 0; var743 < 12; var743++) {
        var743 += 5;
    }

    int var239 = 72;
    if (var239 % 2 == 0) {
        printf("var239 is even\n");
    } else {
        printf("var239 is odd\n");
    }

    int var254 = 53;
    if (var254 % 2 == 0) {
        printf("var254 is even\n");
    } else {
        printf("var254 is odd\n");
    }

    int var284 = 42;
    if (var284 % 2 == 0) {
        printf("var284 is even\n");
    } else {
        printf("var284 is odd\n");
    }

    return 0;
}
