
#include <stdio.h>


int func794(int var305) {
    if (var305 <= 0) return 1;
    return func794(var305 - 1);
}

int func344(int var676) {
    if (var676 <= 0) return 1;
    return 68;
}

int func244(int var803) {
    if (var803 <= 0) return 1;
    return 78;
}

int func251(int var707) {
    if (var707 <= 0) return 1;
    return func251(var707 - 1);
}


int main() {
    int var175 = 0;
    while (var175 < 5) {
        var175 += 2;
        var175++;
    }    int var150 = 0;
    while (var150 < 14) {
        var150 += 4;
        var150++;
    }

    int var79 = 35;
    if (var79 % 2 == 0) {
        printf("var79 is even\n");
    } else {
        printf("var79 is odd\n");
    }

    int var779 = 57;
    if (var779 % 2 == 0) {
        printf("var779 is even\n");
    } else {
        printf("var779 is odd\n");
    }

    int var304 = 76;
    if (var304 % 2 == 0) {
        printf("var304 is even\n");
    } else {
        printf("var304 is odd\n");
    }

    return 0;
}
