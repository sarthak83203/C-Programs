#include <stdio.h>

int main()
{
    int k, n;
    scanf("%d %d", &k, &n);//total number of queue and total array size

    int arr[n];            // shared array
    int front[k], rear[k]; // front and rear pointers
    int size = n / k;      // max size for each queue

    for (int i = 0; i < k; i++)
    {
        front[i] = -1;
        rear[i] = -1;
    }

    while (1)
    {
        int op;
        scanf("%d", &op); //operattion code for this iteration

        if (op == 0)
            break; // exit

        if (op == 1)
        { // enqueue
            int item, qn;
            scanf("%d %d", &item, &qn); //value to enqueue and queue number.......

            int start = qn * size;      // start index of this queue
            int end = start + size - 1; // end index of this queue

            if (front[qn] == -1)
            {
                front[qn] = start; // first element in this queue
                rear[qn] = start;
            }
            else
            {
                rear[qn] = rear[qn] + 1; // move rear forward
            }
            arr[rear[qn]] = item; // store the item
        }
        else if (op == 2)
        { // dequeue
            int qn;
            scanf("%d", &qn);

            if (front[qn] == -1 || front[qn] > rear[qn])
            {
                printf("Queue %d underflow\n", qn);
            }
            else
            {
                printf("Dequeued element from queue %d is %d\n", qn, arr[front[qn]]);
                front[qn]++;
            }
        }
    }

    return 0;
}
