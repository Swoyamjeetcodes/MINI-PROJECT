
#include <stdio.h>


int func615(int var392) {
    if (var392 <= 0) return 1;
    return 70;
}

int func634(int var811) {
    if (var811 <= 0) return 1;
    return 91;
}

int func525(int var344) {
    if (var344 <= 0) return 1;
    return func525(var344 - 1);
}

int func960(int var189) {
    if (var189 <= 0) return 1;
    return 40;
}

int func265(int var509) {
    if (var509 <= 0) return 1;
    return 5;
}


int main() {
    int var563 = 0;
    while (var563 < 6) {
        var563 += 1;
        var563++;
    }    for (int var682 = 0; var682 < 6; var682++) {
        var682 += 2;
    }    int var52 = 0;
    while (var52 < 11) {
        var52 += 2;
        var52++;
    }

    int var376 = 42;
    if (var376 % 2 == 0) {
        printf("var376 is even\n");
    } else {
        printf("var376 is odd\n");
    }

    return 0;
}
