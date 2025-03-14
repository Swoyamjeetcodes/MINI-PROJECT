
#include <stdio.h>


int func809(int var275) {
    if (var275 <= 0) return 1;
    return func809(var275 - 1);
}

int func59(int var687) {
    if (var687 <= 0) return 1;
    return 84;
}

int func520(int var582) {
    if (var582 <= 0) return 1;
    return 42;
}

int func31(int var273) {
    if (var273 <= 0) return 1;
    return 5;
}

int func557(int var601) {
    if (var601 <= 0) return 1;
    return func557(var601 - 1);
}


int main() {
    int var128 = 0;
    while (var128 < 11) {
        var128 += 2;
        var128++;
    }

    int var670 = 53;
    if (var670 % 2 == 0) {
        printf("var670 is even\n");
    } else {
        printf("var670 is odd\n");
    }

    int var986 = 32;
    if (var986 % 2 == 0) {
        printf("var986 is even\n");
    } else {
        printf("var986 is odd\n");
    }

    int var13 = 22;
    if (var13 % 2 == 0) {
        printf("var13 is even\n");
    } else {
        printf("var13 is odd\n");
    }

    return 0;
}
