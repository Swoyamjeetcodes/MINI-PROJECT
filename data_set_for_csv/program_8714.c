
#include <stdio.h>


int func831(int var252) {
    if (var252 <= 0) return 1;
    return func831(var252 - 1);
}

int func286(int var775) {
    if (var775 <= 0) return 1;
    return func286(var775 - 1);
}


int main() {
    int var344 = 0;
    while (var344 < 19) {
        var344 += 4;
        var344++;
    }    for (int var648 = 0; var648 < 12; var648++) {
        var648 += 1;
    }

    int var115 = 6;
    if (var115 % 2 == 0) {
        printf("var115 is even\n");
    } else {
        printf("var115 is odd\n");
    }

    int var673 = 93;
    if (var673 % 2 == 0) {
        printf("var673 is even\n");
    } else {
        printf("var673 is odd\n");
    }

    int var122 = 67;
    if (var122 % 2 == 0) {
        printf("var122 is even\n");
    } else {
        printf("var122 is odd\n");
    }

    return 0;
}
