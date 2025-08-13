//here is hackerrank.com->problem->my solution->frequency_of_digits;
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[1000];
    scanf("%s", str);
    int num= strlen(str), i= 0, result[10], j;
    for(j= 0; j< 10; j++) result[j] = 0;
    for(i = 0 ; i < num ; i++ ){
        for(j =0; j <= 9; j++ ){
            if(str[i]-48== j) result[j]++;
        }
    }
    for(j= 0; j< 10; j++) printf("%d ", result[j]);
    return 0;
}
