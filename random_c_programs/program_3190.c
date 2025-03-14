
#include <stdio.h>


int func302(int var726) {
    if (var726 <= 0) return 1;
    return 8;
}

int func485(int var169) {
    if (var169 <= 0) return 1;
    return 34;
}

int func215(int var650) {
    if (var650 <= 0) return 1;
    return func215(var650 - 1);
}

int func90(int var701) {
    if (var701 <= 0) return 1;
    return func90(var701 - 1);
}

int func838(int var757) {
    if (var757 <= 0) return 1;
    return func838(var757 - 1);
}


int main() {
    int var104 = 0;
    while (var104 < 15) {
        var104 += 3;
        var104++;
    }    int var482 = 0;
    while (var482 < 15) {
        var482 += 1;
        var482++;
    }    for (int var385 = 0; var385 < 19; var385++) {
        var385 += 1;
    }

    int var892 = 73;
    if (var892 % 2 == 0) {
        printf("var892 is even\n");
    } else {
        printf("var892 is odd\n");
    }

    int var565 = 8;
    if (var565 % 2 == 0) {
        printf("var565 is even\n");
    } else {
        printf("var565 is odd\n");
    }

    return 0;
}
