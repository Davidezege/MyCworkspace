#include "cs50.h"
#include <stdio.h>

bool am_ex();
bool m_c();
bool vi_sa();

int main(void)
{
    long cardno = get_long("number: ");

    int length = 0;
    for (long tmp_cardno = cardno; tmp_cardno > 0; length++)
    {
        tmp_cardno /= 10;
    }

    if (length == 15)
    {
        bool isAmex = am_ex(cardno);

        if (isAmex == true)
        {
            printf("AMEX\n");
            return 0;
        }

        else
        {
            printf("INVALID\n");
        }
    }

    else if (length == 13)
    {
        bool isVisa = vi_sa(cardno, length);

        if (isVisa == true)
        {
            printf("VISA\n");
            return 0;
        }

        else
        {
            printf("INVALID\n");
            return 0;
        }
    }

    else if (length == 16)
    {
        bool isMC = m_c(cardno, length);

        if (isMC == true)
        {
            printf("MASTERCARD\n");
            return 0;
        }

        else
        {
            isMC = vi_sa(cardno, length);

            if (isMC == true)
            {
                printf("MASTERCARD\n");
                return 0;
            }

            else
            {
                printf("INVALID\n");
                return 0;
            }
        }
    }

    else
    {
        printf("INVALID\n");
        return 0;
    }
}

bool am_ex(long card_no)
{
    int n = 15;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = card_no % 10;
        card_no /= 10;
    }

    int sum = (array[n - 1] * 10) + array[n - 2];

    if (sum != 34)
    {
        if (sum != 37)
        {
            return false;
        }
    }

    sum = 0;
    for (int i = 1; i < n; i += 2)
    {
        int doubled_array = array[i] * 2;
        if (doubled_array > 9)
        {
            int div_array = doubled_array % 10;
            doubled_array /= 10;
            sum += div_array + doubled_array;
        }

        else
        {
            sum += doubled_array;
        }
    }

    int other_sum = 0;
    for (int i = 0; i < n; i += 2)
    {
        other_sum += array[i];
    }

    sum += other_sum;

    if (sum % 10 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

bool m_c(long card_no, int visa_length)
{
    int n = visa_length;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = card_no % 10;
        card_no /= 10;
    }

    int sum = (array[n-1] * 10) + array[n-2];

    for (int i = 51; sum != i; i++)
    {
        if (i == 56)
        {
            return false;
        }
    }

    sum = 0;
    for (int i = 1; i < n; i += 2)
    {
        int doubled_array = array[i] * 2;
        if (doubled_array > 9)
        {
            int div_array = doubled_array % 10;
            doubled_array /= 10;
            sum += div_array + doubled_array;
        }

        else
        {
            sum += doubled_array;
        }
    }

    int other_sum = 0;
    for (int i = 0; i < n; i += 2)
    {
        other_sum += array[i];
    }

    sum += other_sum;

    if (sum % 10 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

bool vi_sa(long card_no, int visa_length)
{
    int n = visa_length;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = card_no % 10;
        card_no /= 10;
    }

    int sum = array[n-1];

    if (sum != 4)
    {
        return false;
    }

    sum = 0;
    for (int i = 1; i < n; i += 2)
    {
        int doubled_array = array[i] * 2;
        if (doubled_array > 9)
        {
            int div_array = doubled_array % 10;
            doubled_array /= 10;
            sum += div_array + doubled_array;
        }

        else
        {
            sum += doubled_array;
        }
    }

    int other_sum = 0;
    for (int i = 0; i < n; i += 2)
    {
        other_sum += array[i];
    }

    sum += other_sum;

    if (sum % 10 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}
