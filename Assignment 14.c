Array in C Language

1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.
2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.
3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.
5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.
6. Write a program to sort elements of an array of size 10. Take array values from the
user.
7. Write a program to find second largest in an array.Take array values from the user.
8. Write a program to find the second smallest number in an array.Take array values
from the user.
9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.
10. Write a program in C to copy the elements of one array into another array.Take array
values from the user.

Solution:-

1. #include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of the array elements is: %d\n", sum);
    return 0;
}

2. #include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float average = sum / 10.0;
    printf("Average of the array elements is: %.2f\n", average);
    return 0;
}

3. #include <stdio.h>

int main() {
    int arr[10];
    int sum_even = 0, sum_odd = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sum_even += arr[i];
        } else {
            sum_odd += arr[i];
        }
    }

    printf("Sum of even numbers is: %d\n", sum_even);
    printf("Sum of odd numbers is: %d\n", sum_odd);
    return 0;
}

4. #include <stdio.h>

int main() {
    int arr[10];
    int max;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The greatest number in the array is: %d\n", max);
    return 0;
}

5. #include <stdio.h>

int main() {
    int arr[10];
    int min;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The smallest number in the array is: %d\n", min);
    return 0;
}

6. #include <stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

7. #include <stdio.h>

int main() {
    int arr[10];
    int max1, max2;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    printf("The second largest number in the array is: %d\n", max2);
    return 0;
}

8. #include <stdio.h>

int main() {
    int arr[10];
    int min1, min2;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    min1 = min2 = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] > min1) {
            min2 = arr[i];
        }
    }

    printf("The second smallest number in the array is: %d\n", min2);
    return 0;
}

9. #include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

10. #include <stdio.h>

int main() {
    int arr1[10], arr2[10];

    printf("Enter 10 numbers for the first array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < 10; i++) {
        arr2[i] = arr1[i];
    }

    printf("Elements of the second array are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
