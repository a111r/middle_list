#include "middle_list.h"

long itc_sum_even_lst(const vector<int> &lst)
{
    long sum = 0;
    for(long long i = 0; i < lst.size(); i += 2)
        sum += lst[i];
    return sum;
}

long itc_sum_even_part_lst(const vector<int> &lst)
{
    long sum = 0;
    for(int i = 0; i < lst.size(); i++)
        if(lst[i] % 2 == 0)
            sum += lst[i];
    return sum;
}

void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2) {
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] % 2 == 0)
            lst1.push_back(lst[i]);
        else
            lst2.push_back(lst[i]);
    }
}

void itc_pos_neg_separator_lst(const vector<int> &lst, vector<int> &lst1, vector<int> &lst2, vector<int> &lst3)
{
    for(long long i = 0; i < lst.size(); i++)
    {
        if(lst[i] < 0)
            lst1.push_back(lst[i]);
        else if(lst[i] == 0)
            lst2.push_back(lst[i]);
        else
            lst3.push_back(lst[i]);
    }
}

void itc_odd_even_analysis_lst(const vector <int> &lst)
{
    int kolcht = kolchet(lst);
    int kolnecht = kolnechet(lst);
    int maxcht = maxchet(lst);
    int mincht = minchet(lst);
    int maxnecht = maxnechet(lst);
    int minnecht = minnechet(lst);
    int sumcht = itc_sum_even_part_lst(lst);
    int cumnecht = itc_sum_odd_part_lst(lst);
    setlocale(LC_ALL, "Russian");
    cout << "Анализ списка:\n";
    cout << "Количество четных чисел: " << kolcht << "        Количество нечетных чисел: " << kolnecht << "\n";
    cout << "Максимальная четная цифра: " << maxcht << "        Максимальная нечетная цифра: " << maxnecht << "\n";
    cout << "Минимальная четная цифра: " << mincht<< "        Минимальная нечетная цифра: " << minnecht << "\n";
    cout << "Сумма четных чисел: " << sumcht << "        Сумма нечетных чисел: " << cumnecht << "\n";
}

