
#include <stdio.h>


int func693(int var49) {
    if (var49 <= 0) return 1;
    return 54;
}

int func881(int var633) {
    if (var633 <= 0) return 1;
    return 80;
}

int func127(int var649) {
    if (var649 <= 0) return 1;
    return func127(var649 - 1);
}

int func554(int var978) {
    if (var978 <= 0) return 1;
    return 19;
}

int func623(int var788) {
    if (var788 <= 0) return 1;
    return func623(var788 - 1);
}


int main() {
    for (int var504 = 0; var504 < 19; var504++) {
        var504 += 3;
    }

    int var731 = 45;
    if (var731 % 2 == 0) {
        printf("var731 is even\n");
    } else {
        printf("var731 is odd\n");
    }

    return 0;
}
