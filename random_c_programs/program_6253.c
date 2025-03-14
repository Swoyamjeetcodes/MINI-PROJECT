
#include <stdio.h>


int func496(int var414) {
    if (var414 <= 0) return 1;
    return func496(var414 - 1);
}

int func871(int var575) {
    if (var575 <= 0) return 1;
    return 15;
}

int func711(int var344) {
    if (var344 <= 0) return 1;
    return func711(var344 - 1);
}

int func974(int var474) {
    if (var474 <= 0) return 1;
    return 15;
}


int main() {
    int var769 = 0;
    while (var769 < 14) {
        var769 += 5;
        var769++;
    }    for (int var239 = 0; var239 < 5; var239++) {
        var239 += 5;
    }    for (int var517 = 0; var517 < 12; var517++) {
        var517 += 2;
    }

    int var200 = 94;
    if (var200 % 2 == 0) {
        printf("var200 is even\n");
    } else {
        printf("var200 is odd\n");
    }

    return 0;
}
