#include "middle_list.h"

long long itc_len(string str)
{
    long long kol = 0, i = 0;
    while (str[i] != '\0'){
        kol++;
        i++;
    }
   return kol;
}

bool chet(int num)
{
    if (num % 2 == 0)
        return true;
    return false;
}

int kolchet(const vector <int> & lst)
{
    int kol = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (chet(lst[i]))
            kol++;
    }
    return kol;
}

int kolnechet(const vector <int> & lst)
{
    int kol = 0;
    for (int i = 0; i < lst.size(); i++)
        if (!chet(lst[i]))
            kol++;
    return kol;
}

int maxchet(const vector <int> & lst)
{
    int max = 0;
    for (int i = 0; i < lst.size(); i++)
        if (lst[i] > max && chet(lst[i]))
            max = lst[i];
    return max;
}


