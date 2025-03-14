
#include <stdio.h>


int func342(int var792) {
    if (var792 <= 0) return 1;
    return 89;
}

int func339(int var96) {
    if (var96 <= 0) return 1;
    return 89;
}

int func301(int var855) {
    if (var855 <= 0) return 1;
    return func301(var855 - 1);
}

int func706(int var89) {
    if (var89 <= 0) return 1;
    return func706(var89 - 1);
}


int main() {
    for (int var960 = 0; var960 < 8; var960++) {
        var960 += 2;
    }    int var637 = 0;
    while (var637 < 17) {
        var637 += 4;
        var637++;
    }

    int var155 = 34;
    if (var155 % 2 == 0) {
        printf("var155 is even\n");
    } else {
        printf("var155 is odd\n");
    }

    return 0;
}
