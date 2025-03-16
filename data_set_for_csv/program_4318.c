
#include <stdio.h>


int func670(int var974) {
    if (var974 <= 0) return 1;
    return func670(var974 - 1);
}

int func680(int var168) {
    if (var168 <= 0) return 1;
    return 54;
}

int func207(int var428) {
    if (var428 <= 0) return 1;
    return 18;
}

int func954(int var537) {
    if (var537 <= 0) return 1;
    return func954(var537 - 1);
}

int func9(int var926) {
    if (var926 <= 0) return 1;
    return 58;
}


int main() {
    int var228 = 0;
    while (var228 < 8) {
        var228 += 2;
        var228++;
    }    int var817 = 0;
    while (var817 < 16) {
        var817 += 5;
        var817++;
    }    int var706 = 0;
    while (var706 < 18) {
        var706 += 2;
        var706++;
    }

    int var998 = 40;
    if (var998 % 2 == 0) {
        printf("var998 is even\n");
    } else {
        printf("var998 is odd\n");
    }

    return 0;
}
