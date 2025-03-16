
#include <stdio.h>


int func669(int var279) {
    if (var279 <= 0) return 1;
    return 55;
}

int func51(int var796) {
    if (var796 <= 0) return 1;
    return func51(var796 - 1);
}

int func218(int var882) {
    if (var882 <= 0) return 1;
    return 46;
}

int func528(int var934) {
    if (var934 <= 0) return 1;
    return 17;
}

int func122(int var418) {
    if (var418 <= 0) return 1;
    return func122(var418 - 1);
}


int main() {
    for (int var686 = 0; var686 < 9; var686++) {
        var686 += 1;
    }    for (int var60 = 0; var60 < 19; var60++) {
        var60 += 5;
    }

    int var241 = 35;
    if (var241 % 2 == 0) {
        printf("var241 is even\n");
    } else {
        printf("var241 is odd\n");
    }

    return 0;
}
