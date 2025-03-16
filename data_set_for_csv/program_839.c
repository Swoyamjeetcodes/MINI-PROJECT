
#include <stdio.h>


int func438(int var941) {
    if (var941 <= 0) return 1;
    return func438(var941 - 1);
}

int func907(int var614) {
    if (var614 <= 0) return 1;
    return 38;
}


int main() {
    int var289 = 0;
    while (var289 < 6) {
        var289 += 5;
        var289++;
    }    for (int var743 = 0; var743 < 14; var743++) {
        var743 += 3;
    }    for (int var79 = 0; var79 < 20; var79++) {
        var79 += 2;
    }

    int var876 = 3;
    if (var876 % 2 == 0) {
        printf("var876 is even\n");
    } else {
        printf("var876 is odd\n");
    }

    int var157 = 56;
    if (var157 % 2 == 0) {
        printf("var157 is even\n");
    } else {
        printf("var157 is odd\n");
    }

    return 0;
}
