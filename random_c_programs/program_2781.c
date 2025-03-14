
#include <stdio.h>


int func200(int var860) {
    if (var860 <= 0) return 1;
    return func200(var860 - 1);
}

int func618(int var452) {
    if (var452 <= 0) return 1;
    return 35;
}

int func999(int var981) {
    if (var981 <= 0) return 1;
    return func999(var981 - 1);
}

int func515(int var210) {
    if (var210 <= 0) return 1;
    return func515(var210 - 1);
}

int func299(int var580) {
    if (var580 <= 0) return 1;
    return func299(var580 - 1);
}


int main() {
    for (int var307 = 0; var307 < 20; var307++) {
        var307 += 2;
    }

    int var965 = 45;
    if (var965 % 2 == 0) {
        printf("var965 is even\n");
    } else {
        printf("var965 is odd\n");
    }

    return 0;
}
