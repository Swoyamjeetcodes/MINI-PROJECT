
#include <stdio.h>


int func271(int var845) {
    if (var845 <= 0) return 1;
    return 5;
}

int func935(int var176) {
    if (var176 <= 0) return 1;
    return func935(var176 - 1);
}

int func493(int var847) {
    if (var847 <= 0) return 1;
    return func493(var847 - 1);
}

int func583(int var776) {
    if (var776 <= 0) return 1;
    return func583(var776 - 1);
}


int main() {
    int var401 = 0;
    while (var401 < 19) {
        var401 += 1;
        var401++;
    }    int var745 = 0;
    while (var745 < 16) {
        var745 += 3;
        var745++;
    }    for (int var522 = 0; var522 < 12; var522++) {
        var522 += 4;
    }

    int var807 = 34;
    if (var807 % 2 == 0) {
        printf("var807 is even\n");
    } else {
        printf("var807 is odd\n");
    }

    return 0;
}
