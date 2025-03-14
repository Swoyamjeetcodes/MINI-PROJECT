
#include <stdio.h>


int func935(int var445) {
    if (var445 <= 0) return 1;
    return func935(var445 - 1);
}

int func408(int var343) {
    if (var343 <= 0) return 1;
    return func408(var343 - 1);
}


int main() {
    int var926 = 0;
    while (var926 < 11) {
        var926 += 5;
        var926++;
    }    int var212 = 0;
    while (var212 < 10) {
        var212 += 3;
        var212++;
    }    int var38 = 0;
    while (var38 < 17) {
        var38 += 1;
        var38++;
    }

    int var211 = 61;
    if (var211 % 2 == 0) {
        printf("var211 is even\n");
    } else {
        printf("var211 is odd\n");
    }

    int var705 = 89;
    if (var705 % 2 == 0) {
        printf("var705 is even\n");
    } else {
        printf("var705 is odd\n");
    }

    return 0;
}
