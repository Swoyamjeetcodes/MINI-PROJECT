
#include <stdio.h>


int func692(int var970) {
    if (var970 <= 0) return 1;
    return 58;
}

int func821(int var697) {
    if (var697 <= 0) return 1;
    return func821(var697 - 1);
}

int func134(int var53) {
    if (var53 <= 0) return 1;
    return 98;
}

int func802(int var190) {
    if (var190 <= 0) return 1;
    return func802(var190 - 1);
}


int main() {
    int var10 = 0;
    while (var10 < 15) {
        var10 += 2;
        var10++;
    }    for (int var119 = 0; var119 < 9; var119++) {
        var119 += 1;
    }    for (int var216 = 0; var216 < 14; var216++) {
        var216 += 3;
    }

    int var525 = 39;
    if (var525 % 2 == 0) {
        printf("var525 is even\n");
    } else {
        printf("var525 is odd\n");
    }

    return 0;
}
