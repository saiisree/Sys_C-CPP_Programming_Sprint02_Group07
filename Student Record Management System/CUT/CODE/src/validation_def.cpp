
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
 * RETURN: boolean
 *
 * **************************************************************************************/


int Student::rollNum_Validation(int rollno)
{
        int count = 0;
        while(rollno != 0)
        {
                rollno = rollno / 10;
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
 * RETURN: boolean
 *
 * **************************************************************************************/


int Student::phoneNum_Validation(string phoneno)
{
        int i, length, num = 0, small = 0, caps = 0, special_char = 0;
        length = phoneno.length();
        if(length == 10)
        {
                if(phoneno[0] == '9' || phoneno[0] == '8' || phoneno[0] == '7' || phoneno[0] == '6')
                {
                        for(i=1;i<10;i++)
                        {
                                if(phoneno[i] >= '0' && phoneno[i] <= '9')
                                {
                                        num++;
                                }
                                else if(phoneno[i] >= 'a' && phoneno[i] <= 'z')
                                {
                                        small++;
                                }
                                else if(phoneno[i] >= 'A' && phoneno[i] <= 'Z')
                                {
                                        caps++;
                                }
                                else if(phoneno[0] == '!' || phoneno[0] == '@' || phoneno[0] == '#' || phoneno[0] == '$' || phoneno[0] == '%' || phoneno[0] == '^' || phoneno[0] == '&' || phoneno[0] == '*')
                                {
                                        special_char++;
                                }
			}
                        
		}
       
        }
        if(num > 0 && small <= 0 && caps <= 0 && special_char <= 0)
                        return TRUE;
                else
                        return FALSE;
}


/***************************************************************************************
 * FUNCTION NAME: email_Validation
 *
 * DESCRIPTION: In this function, it checks the email validation where it should contain @ or .
 *
 * PARAMETERS: email_id
 *
 * RETURN: boolean
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
 * RETURN: boolean
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
 * RETURN: boolean
 *
 * **************************************************************************************/


int Student::age_Validation(string age)
{
        if(age == "15" || age == "16" || age == "17" || age == "18")
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
 * RETURN: boolean
 *
 * **************************************************************************************/


char Student::gender_Validation(string gender)
{
        if(gender == "F" || gender == "f" || gender == "M" || gender == "m")
                return TRUE;
        else
                return FALSE;
}