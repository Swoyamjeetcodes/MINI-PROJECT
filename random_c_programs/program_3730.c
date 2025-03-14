
#include <stdio.h>


int func227(int var40) {
    if (var40 <= 0) return 1;
    return func227(var40 - 1);
}

int func518(int var351) {
    if (var351 <= 0) return 1;
    return func518(var351 - 1);
}

int func121(int var796) {
    if (var796 <= 0) return 1;
    return func121(var796 - 1);
}

int func774(int var890) {
    if (var890 <= 0) return 1;
    return func774(var890 - 1);
}


int main() {
    for (int var122 = 0; var122 < 9; var122++) {
        var122 += 2;
    }    for (int var924 = 0; var924 < 6; var924++) {
        var924 += 1;
    }    for (int var873 = 0; var873 < 9; var873++) {
        var873 += 5;
    }

    int var110 = 94;
    if (var110 % 2 == 0) {
        printf("var110 is even\n");
    } else {
        printf("var110 is odd\n");
    }

    return 0;
}
