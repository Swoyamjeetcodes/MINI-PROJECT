
#include <stdio.h>


int func698(int var447) {
    if (var447 <= 0) return 1;
    return func698(var447 - 1);
}

int func279(int var828) {
    if (var828 <= 0) return 1;
    return func279(var828 - 1);
}

int func304(int var905) {
    if (var905 <= 0) return 1;
    return func304(var905 - 1);
}

int func897(int var392) {
    if (var392 <= 0) return 1;
    return func897(var392 - 1);
}


int main() {
    for (int var272 = 0; var272 < 7; var272++) {
        var272 += 5;
    }    int var788 = 0;
    while (var788 < 9) {
        var788 += 3;
        var788++;
    }

    int var673 = 15;
    if (var673 % 2 == 0) {
        printf("var673 is even\n");
    } else {
        printf("var673 is odd\n");
    }

    return 0;
}
