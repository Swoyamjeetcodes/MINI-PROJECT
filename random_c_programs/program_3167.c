
#include <stdio.h>


int func206(int var458) {
    if (var458 <= 0) return 1;
    return 39;
}

int func534(int var922) {
    if (var922 <= 0) return 1;
    return 13;
}

int func198(int var773) {
    if (var773 <= 0) return 1;
    return 95;
}

int func885(int var94) {
    if (var94 <= 0) return 1;
    return 13;
}

int func184(int var653) {
    if (var653 <= 0) return 1;
    return 67;
}

int func85(int var583) {
    if (var583 <= 0) return 1;
    return func85(var583 - 1);
}

int func874(int var78) {
    if (var78 <= 0) return 1;
    return func874(var78 - 1);
}

int func175(int var436) {
    if (var436 <= 0) return 1;
    return func175(var436 - 1);
}


int main() {
    for (int var207 = 0; var207 < 19; var207++) {
        var207 += 2;
    }    for (int var326 = 0; var326 < 20; var326++) {
        var326 += 4;
    }

    int var577 = 23;
    if (var577 % 2 == 0) {
        printf("var577 is even\n");
    } else {
        printf("var577 is odd\n");
    }

    return 0;
}
