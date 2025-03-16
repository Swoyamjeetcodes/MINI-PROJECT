
#include <stdio.h>


int func831(int var897) {
    if (var897 <= 0) return 1;
    return func831(var897 - 1);
}

int func816(int var447) {
    if (var447 <= 0) return 1;
    return 44;
}

int func987(int var990) {
    if (var990 <= 0) return 1;
    return 40;
}

int func475(int var595) {
    if (var595 <= 0) return 1;
    return 80;
}


int main() {
    int var974 = 0;
    while (var974 < 14) {
        var974 += 3;
        var974++;
    }    int var649 = 0;
    while (var649 < 15) {
        var649 += 2;
        var649++;
    }

    int var449 = 10;
    if (var449 % 2 == 0) {
        printf("var449 is even\n");
    } else {
        printf("var449 is odd\n");
    }

    int var342 = 39;
    if (var342 % 2 == 0) {
        printf("var342 is even\n");
    } else {
        printf("var342 is odd\n");
    }

    return 0;
}
