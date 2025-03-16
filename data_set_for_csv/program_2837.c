
#include <stdio.h>


int func194(int var850) {
    if (var850 <= 0) return 1;
    return 47;
}

int func486(int var706) {
    if (var706 <= 0) return 1;
    return func486(var706 - 1);
}

int func57(int var545) {
    if (var545 <= 0) return 1;
    return 73;
}

int func602(int var296) {
    if (var296 <= 0) return 1;
    return func602(var296 - 1);
}


int main() {
    int var750 = 0;
    while (var750 < 16) {
        var750 += 3;
        var750++;
    }    for (int var243 = 0; var243 < 14; var243++) {
        var243 += 3;
    }

    int var119 = 74;
    if (var119 % 2 == 0) {
        printf("var119 is even\n");
    } else {
        printf("var119 is odd\n");
    }

    return 0;
}
