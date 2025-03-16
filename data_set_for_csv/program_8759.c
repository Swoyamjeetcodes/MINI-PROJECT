
#include <stdio.h>


int func51(int var373) {
    if (var373 <= 0) return 1;
    return func51(var373 - 1);
}

int func421(int var178) {
    if (var178 <= 0) return 1;
    return func421(var178 - 1);
}

int func861(int var729) {
    if (var729 <= 0) return 1;
    return func861(var729 - 1);
}

int func430(int var663) {
    if (var663 <= 0) return 1;
    return func430(var663 - 1);
}


int main() {
    for (int var321 = 0; var321 < 16; var321++) {
        var321 += 5;
    }    for (int var962 = 0; var962 < 7; var962++) {
        var962 += 1;
    }    int var465 = 0;
    while (var465 < 7) {
        var465 += 5;
        var465++;
    }    int var489 = 0;
    while (var489 < 20) {
        var489 += 5;
        var489++;
    }    for (int var873 = 0; var873 < 17; var873++) {
        var873 += 4;
    }    for (int var562 = 0; var562 < 15; var562++) {
        var562 += 4;
    }    for (int var415 = 0; var415 < 6; var415++) {
        var415 += 2;
    }

    int var248 = 64;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    return 0;
}
