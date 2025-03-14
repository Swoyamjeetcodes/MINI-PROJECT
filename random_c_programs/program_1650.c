
#include <stdio.h>


int func932(int var879) {
    if (var879 <= 0) return 1;
    return func932(var879 - 1);
}

int func890(int var346) {
    if (var346 <= 0) return 1;
    return func890(var346 - 1);
}

int func942(int var855) {
    if (var855 <= 0) return 1;
    return func942(var855 - 1);
}

int func905(int var218) {
    if (var218 <= 0) return 1;
    return func905(var218 - 1);
}

int func428(int var24) {
    if (var24 <= 0) return 1;
    return 33;
}


int main() {
    int var901 = 0;
    while (var901 < 12) {
        var901 += 1;
        var901++;
    }    int var843 = 0;
    while (var843 < 6) {
        var843 += 4;
        var843++;
    }

    int var334 = 55;
    if (var334 % 2 == 0) {
        printf("var334 is even\n");
    } else {
        printf("var334 is odd\n");
    }

    int var964 = 0;
    if (var964 % 2 == 0) {
        printf("var964 is even\n");
    } else {
        printf("var964 is odd\n");
    }

    return 0;
}
