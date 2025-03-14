
#include <stdio.h>


int func85(int var742) {
    if (var742 <= 0) return 1;
    return func85(var742 - 1);
}

int func940(int var117) {
    if (var117 <= 0) return 1;
    return func940(var117 - 1);
}

int func525(int var298) {
    if (var298 <= 0) return 1;
    return 25;
}

int func907(int var639) {
    if (var639 <= 0) return 1;
    return func907(var639 - 1);
}


int main() {
    for (int var66 = 0; var66 < 7; var66++) {
        var66 += 3;
    }    for (int var83 = 0; var83 < 11; var83++) {
        var83 += 3;
    }    for (int var772 = 0; var772 < 20; var772++) {
        var772 += 1;
    }

    int var968 = 5;
    if (var968 % 2 == 0) {
        printf("var968 is even\n");
    } else {
        printf("var968 is odd\n");
    }

    int var937 = 93;
    if (var937 % 2 == 0) {
        printf("var937 is even\n");
    } else {
        printf("var937 is odd\n");
    }

    int var872 = 90;
    if (var872 % 2 == 0) {
        printf("var872 is even\n");
    } else {
        printf("var872 is odd\n");
    }

    return 0;
}
