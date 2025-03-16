
#include <stdio.h>


int func560(int var180) {
    if (var180 <= 0) return 1;
    return func560(var180 - 1);
}

int func718(int var775) {
    if (var775 <= 0) return 1;
    return func718(var775 - 1);
}

int func222(int var832) {
    if (var832 <= 0) return 1;
    return func222(var832 - 1);
}


int main() {
    for (int var412 = 0; var412 < 18; var412++) {
        var412 += 2;
    }    int var948 = 0;
    while (var948 < 19) {
        var948 += 3;
        var948++;
    }    for (int var101 = 0; var101 < 12; var101++) {
        var101 += 2;
    }

    int var225 = 17;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    return 0;
}
