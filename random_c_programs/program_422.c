
#include <stdio.h>


int func724(int var164) {
    if (var164 <= 0) return 1;
    return func724(var164 - 1);
}

int func838(int var182) {
    if (var182 <= 0) return 1;
    return 51;
}


int main() {
    for (int var913 = 0; var913 < 20; var913++) {
        var913 += 5;
    }    int var880 = 0;
    while (var880 < 18) {
        var880 += 4;
        var880++;
    }    int var576 = 0;
    while (var576 < 9) {
        var576 += 5;
        var576++;
    }

    int var326 = 97;
    if (var326 % 2 == 0) {
        printf("var326 is even\n");
    } else {
        printf("var326 is odd\n");
    }

    return 0;
}
