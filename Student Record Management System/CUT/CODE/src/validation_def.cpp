
/*****************************************************************************************
 * FILENAME: validation_def.cpp
 *
 * DESCRIPTION: This is validation module definition file.
 *
 ****************************************************************************************/

#include"student_header.h"

/***************************************************************************************
 * FUNCTION NAME: rollNum_Validation
 *
 * DESCRIPTION: In this function, it checks the roll no validation where the length has to be 6
 *
 * PARAMETERS: roll_no
 *
 * **************************************************************************************/

int Student::rollNum_Validation(int roll_no)
{
        int count = 0;
        while(roll_no != 0)
        {
                roll_no = roll_no/10;
                count++;
        }
        if(count == 6)
                return TRUE;
        else
                return FALSE;
}

/***************************************************************************************
 * FUNCTION NAME: phoneNum_Validation
 *
 * DESCRIPTION: In this function, it checks the phone no validation where the length has to be 10 and it must start from 9 or 8 or 7 or 6
 *
 * PARAMETERS: phone_no
 *
 * **************************************************************************************/

int Student::phoneNum_Validation(long int phone_no)
{
        char result[10];
        int i=0;
        sprintf(result, "%ld", phone_no);
        int len = strlen(result);
        if(len == 10)
        {
                if(result[i] == '9' || result[i] == '8' || result[i] == '7' || result[i] == '6')
                {
                        return TRUE;
                }
                else
                {
                        return FALSE;
                }
        }
        else
        {
                return FALSE;
        }
}

/***************************************************************************************
 * FUNCTION NAME: email_Validation
 *
 * DESCRIPTION: In this function, it checks the email validation where it should contain @ or .
 *
 * PARAMETERS: email_id
 *
 * **************************************************************************************/


char Student::email_Validation(string email_id)
{
        int dot = 0, special_char = 0, i, length;
        length = email_id.length();
        for(i=0;i<length;i++)
        {
                if(email_id[i] == '@')
                        special_char++;
                if(email_id[i] == '.')
                        dot++;
        }
        if(dot == 1 && special_char == 1 && length <= 50)
                return TRUE;
        else
                return FALSE;
}

/***************************************************************************************
 * FUNCTION NAME: stream_Validation
 *
 * DESCRIPTION: In this function, it checks the stream validation where the stream should be PCMB or PCME or PCMC
 *
 * PARAMETERS: stream
 *
 * **************************************************************************************/

char Student::stream_Validation(string stream)
{
        if(stream == "PCMB" || stream == "PCMC" || stream == "PCME")
                return TRUE;
        else
                return FALSE;
}


/***************************************************************************************
 * FUNCTION NAME: age_Validation
 *
 * DESCRIPTION: In this function, it checks the age validation where the age should be in between 15 to 18
 *
 * PARAMETERS: age
 *
 * **************************************************************************************/


int Student::age_Validation(int age)
{
        if(age >= 15 && age <= 18)
                return TRUE;
        else
                return FALSE;
}

/***************************************************************************************
 * FUNCTION NAME: gender_Validation
 *
 * DESCRIPTION: In this function, it checks the gender validation where the gender should be F/f/M/m
 *
 * PARAMETERS: gender
 *
 * **************************************************************************************/

char Student::gender_Validation(char gender)
{
        if(gender == 'F' || gender == 'f' || gender == 'M' || gender == 'm')
                return TRUE;
        else
                return FALSE;
}
