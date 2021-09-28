// Hari Kumar
// 002352411
// hkumar@chapman.edu
// CPSC350-02
// Assignment 1

#include "Translator.h"


Translator::Translator()
{
  //constructor
}

Translator::~Translator()
{
  //destructor
}

// translateEnglishWord is a function to translate a single English word to Tutnese
//a string is given as parameter and a string is returned
string Translator::translateEnglishWord(string inputStrWord)
{
  int i;
  string changeStr;

  for (i = 0; i < inputStrWord.size(); ++i)
  {
    //if the current character is the same as the following character use the
    //translateDoubleCharacter function amd
    //lower both characters for comparison test
    if (tolower(inputStrWord[i]) == tolower(inputStrWord[i + 1]))
    {
      changeStr += translateDoubleCharacter(inputStrWord[i]) + inputStrWord[i + 1];
      //increase loop iteration by 1 to move to the next character or else the second double character is printed twice
      ++i;
    }
    else
    {
      //if the current character is not the same as the following character then
      //use translateSingleCharacter to translate single character to Tutnese
      changeStr += translateSingleCharacter(inputStrWord[i]);
    }
  }
  return changeStr;
}

// translateEnglishSentence is a function that converts an English sentence to Tutnese
// a string is given as input and a string is returned
string Translator::translateEnglishSentence(string inputStrSent)
{
  string readData;
  string resultStr;
  string realResult;
  istringstream inSS;
  //put the input sentence into a stream
  inSS.str(inputStrSent);

//loop until all words are read
  while (inSS >> readData)
  {
    //using translateEnglishWord translate each word to Tutnese followed by a space
    resultStr += translateEnglishWord(readData) + " ";
  }

  //there is an extra space between the last character of the last word and period for a sentence so realResult
  //is a substring of resultStr without the last trailing space
  realResult = resultStr.substr(0, resultStr.size() - 1);

  return realResult;
}

//convert single Tutnese word to English
string Translator::translateTutWord(string inputTutWord)
{
  string result;
  string substring;

  int i = 0;

//loop over input Tutnese word
  for (i = 0; i < inputTutWord.size(); ++i)
  {
    //substring is reset to empty each loop iteration
    substring = "";

//if current character in loop is 's'
    if (tolower(inputTutWord[i]) == 's')
    {
      string squaCheck = "";
      string adder = "";
      string capitalCheck = "";
      squaCheck = inputTutWord.substr(i, 4);
      //take substring starting at position i and the next 3 characters as well to see if it equals 'squa'

      if (squaCheck == "squa" || squaCheck == "Squa")
      {
        capitalCheck = squaCheck[0];
        //increment 4 characters to see if the character is 't' or another character
        i = i + 4;
        if (tolower(inputTutWord[i]) == 't')
        {
          //if the character is 't' then increment i one more time to the next character to capture the doubled character
          //store that character as it is a double character in English and add it to the result string
          i = i + 1;
          if (capitalCheck == "S")
          {
            result += toupper(inputTutWord[i]);
            result += inputTutWord[i];
          }
          else
          {
            result += inputTutWord[i];
            result += inputTutWord[i];
          }
        }
        else
        {
          //if the letter is not 't' then there is still a double character and i is in the position of the doubled letter
          //store that character twice in the result string
          if (capitalCheck == "S")
          {
            result += toupper(inputTutWord[i]);
            result += inputTutWord[i];
          }
          else
          {
            result += inputTutWord[i];
            result += inputTutWord[i];
          }
        }
      }
      else
      {
        // if the letters after 's' do not form 'squa' then the following code is executed
        // substring grabs the remaining letters after 's' which forms the Tutnese word 'sus'
        //translate 'sus' and store in result string
        substring = inputTutWord.substr(i, 3);
        result += translateSingleCharacterTut(substring);
        i = i + 2;
        //increase i by 2 to move over the phrase 'sus' and move to the following character
      }
    }
    else if (tolower(inputTutWord[i]) == 'e')
    {
      //if 'e' is detected then increment i once more to check if the following character is 'x'
      i = i + 1;
      if (tolower(inputTutWord[i]) == 'x')
      {
        //if following character is 'x' then decrement once to return i to 'e' index
        //place 'ex' in substring and translate and increment i to next character position
        i = i - 1;
        substring = inputTutWord.substr(i, 2);
        result += translateSingleCharacterTut(substring);
        i = i + 1;
      }
      else
      {
        //if not 'x' then decrement and pass only 'e' to translateSingleCharacterTut function
        i = i - 1;
        substring = inputTutWord.substr(i, 1);
        result += translateSingleCharacterTut(substring);
      }
    }
    //for all the three character Tutnese words
    else if (tolower(inputTutWord[i]) == 'b' || tolower(inputTutWord[i]) == 'd' || tolower(inputTutWord[i]) == 'f'
      || tolower(inputTutWord[i]) == 'g' || tolower(inputTutWord[i]) == 'j' || tolower(inputTutWord[i]) == 'l' || tolower(inputTutWord[i]) == 'm'
      || tolower(inputTutWord[i]) == 'n' || tolower(inputTutWord[i]) == 'p' || tolower(inputTutWord[i]) == 'r' || tolower(inputTutWord[i]) == 't'
      || tolower(inputTutWord[i]) == 'v' || tolower(inputTutWord[i]) == 'y' || tolower(inputTutWord[i]) == 'z')
      {
        //grab the tutnese word and store in substring
        //translate substring and store in result
        substring = inputTutWord.substr(i, 3);
        result += translateSingleCharacterTut(substring);
        i = i + 2;
        //increase i by 2 to skip the following two characters (total 3 characters)
      }
      //for all the four character Tutnese words
    else if (tolower(inputTutWord[i]) == 'c' ||tolower(inputTutWord[i]) == 'h' || tolower(inputTutWord[i]) == 'k'
      || tolower(inputTutWord[i]) == 'w')
      {
        substring = inputTutWord.substr(i, 4);
        result += translateSingleCharacterTut(substring);
        i = i + 3;
        //increase i by 3 to skip the following three characters (total 4 characters skipped)
      }
      //for the one 5 character Tutnese word
    else if (tolower(inputTutWord[i]) == 'q')
    {
      substring = inputTutWord.substr(i, 5);
      result += translateSingleCharacterTut(substring);
      i = i + 4;
      //increase i by 4 to skip the following four characters (total 5 chracters skipped)
    }
    else
    {
      //if none of the specified chracters, then take the substring of the one character
      //and pass it through the translateSingleCharacterTut function
      substring = inputTutWord.substr(i, 1);
      result += translateSingleCharacterTut(substring);
    }
  }
  return result;
}

//put input sentence into stream to translate individual Tutnese words to English
string Translator::translateTutSentence(string inputTutSent)
{
  string readData;
  string resultStr;
  string realResult;
  istringstream inSS;
  //put the input sentence into a stream
  inSS.str(inputTutSent);

//loop until all words are read
  while (inSS >> readData)
  {
    //using translateTutWord translate each word to English followed by a space
    resultStr += translateTutWord(readData) + " ";
  }
  //remove an extra space between last characrter of string and period
  realResult = resultStr.substr(0, resultStr.size() - 1);

  return realResult;
}
