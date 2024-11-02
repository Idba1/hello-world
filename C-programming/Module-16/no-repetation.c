#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int freq[100001] = {0};
    for (int i = 0; i < N; i++)
    {
        freq[arr[i]]++;
    }

    int noRepeat = 0;
    for (int i = 0; i < N; i++)
    {
        if (freq[i] == 1)
        {
            noRepeat++;
        }
    }
    printf("%d", noRepeat);
    return 0;
}
