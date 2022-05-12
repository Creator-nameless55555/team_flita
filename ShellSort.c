#include <stdio.h>
#include <stdlib.h>
//���������� ������� �����
void ShellSort(int n, int mass[])
{
    int step, i, j, tmp; // ����� ���� 
    for (step = n / 2; step > 0; step /= 2)
    {
        // ������������ ���������, ������� ����������� �� ������������ ���� 
        for (i = step; i < n; i++) // ������������ ��������� ������ ���������, ���� i-��� �� ����� ������������ 
        {
            for (j = i - step; j >= 0 && mass[j] > mass[j + step]; j -= step)
            {
                tmp = mass[j];
                mass[j] = mass[j + step];
                mass[j + step] = tmp;
            }
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    int* mass;
    mass = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
        scanf("%d", &mass[i]);
    //���������� ������� �����
    ShellSort(N, mass);
    //����� ���������������� ������� �� �����
    for (int i = 0; i < N; i++)
    {
        printf("%d", mass[i]);
        printf("\n");
    }
    //������������ ������
    free(mass);
    return 0;
}