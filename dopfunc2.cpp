#include "middle_list.h"

int minchet(const vector <int> & lst)
{
    int min = maxchet(lst);
    for (int i = 0; i < lst.size(); i++)
        if (lst[i] < min && chet(lst[i]))
            min = lst[i];
    return min;
}

int maxnechet(const vector <int> & lst)
{
    int max = 0;
    for (int i = 0; i < lst.size(); i++)
        if (lst[i] > max && !chet(lst[i]))
            max = lst[i];
    return max;
}

int minnechet(const vector <int> & lst)
{
    int min = maxnechet(lst);
    for (int i = 0; i < lst.size(); i++)
        if (lst[i] < min && !chet(lst[i]))
            min = lst[i];
    return min;
}

long itc_sum_odd_part_lst(const vector <int> & lst)
{
    long sum = 0;
    for (int i = 0; i < lst.size(); i++)
        if (!chet(lst[i]))
            sum += lst[i];
    return sum;
}
