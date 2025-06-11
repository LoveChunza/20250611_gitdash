#include <stdio.h>
#include <stdlib.h>

// ���� ���� �Լ�
void vector_add(double *A, double *B, double *result, int n)
{
    for (int i = 0; i < n; i++)
    {
        result[i] = A[i] + B[i];
    }
}

// ���� ���� �Լ�
void vector_sub(double *A, double *B, double *result, int n)
{
    for (int i = 0; i < n; i++)
    {
        result[i] = A[i] - B[i];
    }
}

// ���� ���� �Լ�
void vector_dot(double *A, double *B, int n)
{
    double dot = 0;
    for (int i = 0; i < n; i++)
    {
        dot += A[i] * B[i];
    }
    printf("�� ������ ������ : %.2lf\n", dot);
}

int main()
{
    int n;
    printf("������ ũ�⸦ �Է��ϼ���: ");
    scanf("%d", &n);

    // ���� �Ҵ�
    double *A = (double *)malloc(n * sizeof(double));
    double *B = (double *)malloc(n * sizeof(double));
    double *add_result = (double *)malloc(n * sizeof(double));
    double *sub_result = (double *)malloc(n * sizeof(double));

    printf("���� A�� ���Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &A[i]);
    }

    printf("���� B�� ���Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &B[i]);
    }

    // ���� ����
    vector_add(A, B, add_result, n);
    vector_sub(A, B, sub_result, n);

    printf("A + B = [");
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf, ", add_result[i]);
    }
    printf("]\n");

    printf("A - B = [");
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf, ", sub_result[i]);
    }
    printf("]\n");

    vector_dot(A, B, n);

    free(A);
    free(B);
    free(add_result);
    free(sub_result);

    return 0;
}