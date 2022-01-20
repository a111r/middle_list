#include "middle_list.h"

vector <char> itc_strtlist(string str)
{
    vector <char> mass(itc_len(str));
    for(int i = 0; i < itc_len(str); i++)
        mass[i] = str[i];
    return mass;
}

string itc_join(vector<char> lst, string sep){
    string str = "";
    if(lst.size() > 1)
    {
        for(long long i = 0; i < lst.size() - 1; i++)
            str += lst[i] + sep;
        str += lst[lst.size() - 1];
    }
    return str;
}

string itc_rmstrspc(string str)
{
    string answer = "";
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] != ' ')
             answer += str[i];
    return answer;
}

string itc_rmstrchar(string str, string less)
{
    string answer = "";
    for (int i = 0; i < itc_len(str); i++)
    {
        bool a = false;
        for (int j = 0; j < itc_len(less); j++)
            if (str[i] == less[j])
                a = true;
        if (!a)
            answer += str[i];
    }
    return answer;
}

long itc_sumlst(const vector<int> &lst)
{
    long sum = 0;
    for(long long i = 0; i < lst.size(); i++)
        sum += lst[i];
    return sum;
}
