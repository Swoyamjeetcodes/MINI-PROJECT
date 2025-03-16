
#include <stdio.h>


int func651(int var482) {
    if (var482 <= 0) return 1;
    return func651(var482 - 1);
}

int func739(int var301) {
    if (var301 <= 0) return 1;
    return 24;
}

int func198(int var743) {
    if (var743 <= 0) return 1;
    return 26;
}

int func603(int var293) {
    if (var293 <= 0) return 1;
    return func603(var293 - 1);
}


int main() {
    int var807 = 0;
    while (var807 < 12) {
        var807 += 3;
        var807++;
    }    for (int var158 = 0; var158 < 9; var158++) {
        var158 += 1;
    }    for (int var330 = 0; var330 < 7; var330++) {
        var330 += 1;
    }

    int var898 = 44;
    if (var898 % 2 == 0) {
        printf("var898 is even\n");
    } else {
        printf("var898 is odd\n");
    }

    return 0;
}
