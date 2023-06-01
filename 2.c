#include <stdio.h>
//피보나치
int Rpairs(int month);

int main() {
    int N;

    printf("input 'N'-month : ");
    scanf_s("%d", &N);

    int pairs = Rpairs(N);

    printf("Number of rabbit pairs in N-month: %d\n", pairs);

    return 0;
}

int Rpairs(int month) {
    if (month == 1 || month == 2) {
        return 1;
    }

    int currmonth = 2; 
    int prepairs = 1;  
    int currpairs = 1; 

    while (currmonth < month) {
        int newPairs = prepairs;  
        prepairs = currpairs;
        currpairs += newPairs;

        currmonth++;
    }

    return currpairs;
}
