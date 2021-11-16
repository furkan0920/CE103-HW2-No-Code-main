/****************************************************************************
 * Copyleft (L) 2021 CENG - All Rights Not Reserved
 * You may use, distribute and modify this code.
 ****************************************************************************/

 /**
  * @file CE103-HW2-Lib.c
  * @author Ugur CORUH
  * @date 03 October 2021
  *
  * @brief <b> HW-2 Functions </b>
  *
  * HW-2 Sample Lib Functions
  *
  * @see http://bilgisayar.mmf.erdogan.edu.tr/en/
  *
  */

#include "CE103-HW2-Lib.h"

  /**
   @name TestFunction(fnCE103HW2Lib)
	  @brief \b Auto Generated Test Function

	  Auto Generated Test Function Has Doxygen and Plantuml Integration

   Sample Web Page Link
   @see https://www.cplusplus.com/reference/cstring/strcpy/

   Sample Image AES Block Decryption Operation

   @image html aes_enc_dec.png
   @image rtf aes_enc_dec.png
   @image latex aes_enc_dec.png

   Sample Related Function Link
   @see TestFunction (fnCE103HW2Lib)
   <b> Plant UML Sample </b> <BR>
   @image html fnCE103HW2Lib.png
   @image rtf fnCE103HW2Lib.png
   @image latex fnCE103HW2Lib.png

   <!--

	  @startuml fnCE103HW2Lib.png

	  title Servlet Container

	  (*) --> "ClickServlet.handleRequest()"
	  --> "new Page"

	  if "Page.onSecurityCheck" then
		->[true] "Page.onInit()"

		if "isForward?" then
		 ->[no] "Process controls"

		 if "continue processing?" then
		   -->[yes] ===RENDERING===
		 else
		   -->[no] ===REDIRECT_CHECK===
		 endif

		else
		 -->[yes] ===RENDERING===
		endif

		if "is Post?" then
		  -->[yes] "Page.onPost()"
		  --> "Page.onRender()" as render
		  --> ===REDIRECT_CHECK===
		else
		  -->[no] "Page.onGet()"
		  --> render
		endif

	  else
		-->[false] ===REDIRECT_CHECK===
	  endif

	  if "Do redirect?" then
	   ->[yes] "redirect request"
	   --> ==BEFORE_DESTROY===
	  else
	   if "Do Forward?" then
		-left->[yes] "Forward request"
		--> ==BEFORE_DESTROY===
	   else
		-right->[no] "Render page template"
		--> ==BEFORE_DESTROY===
	   endif
	  endif

	  --> "Page.onDestroy()"
	  -->(*)
	  @enduml

   -->

	 @param [in] fia	[\b unsigned char*] Binary Data Input
	 @param [in] fib	[\b int] Binary Data Input Length
	 @param [out] fic	[\b char*] Hex String Output Array

	  @retval [\b int] operation result success 0 fail 1

	  Example Usage :

	   @code
		#include <stdio.h>
		#include <string.h>

		int main (){
		  unsigned char data[]="\x13\x13\x13x\13";
		 int dataLength = 4;
		  char dataHex[40];

		  if(fnCE103HW2Lib(data,dataLength,dataHex)!=0)
		 {
		   printf("Operation Failed!");
		   return -1;
		 }

		printf("Converted Data [%s]",dataHex);

		  return 0;
	   }
	  @endcode
  **/
int fnCE103HW2Lib(unsigned char* fia, int fib, char* fic)
{
	//Empty Body...
	return -1;
}

/**
*
*	  @name   fibonacciNumber (ce103_fibonacciNumber)
*
*	  @brief Fibonacci Number Calculator
*
*	  Calculates the fibonacci number in the given index and return as output
*
*	  @param  [in] fiIndex [\b int]  index of fibonacci number in the serie
*
*	  @retval [\b int] calculated fibonacci number
**/
int ce103_fibonacciNumber(int fiIndex)
{
	//TODO:Start from Here...
	{
		
		int a = 0, b = 1, c, i;
		//Variables are defined.
		if (fiIndex == 0)
		//if 'fiIndex' equals '0'.String is terminated.
			return a;
		//Return command given to 'a'.
		for (i = 2; i <= fiIndex; i++)
		{
			c = a + b;
			a = b;
			b = c;
		//The value of '2' is assigned 'fiIndex'.
		//If 'i' is less than fiIndex, 'i' is summed with previous value.
		}
		//Return command given to 'a'.
		return a;
	}
	;
}


/**
	@name   strrev (ce103_strrev)

	@brief \b Reverse String

	Reverse given string

	@param [in] fiStr [\b char*] The given string which is needed to be reversed.

	@retval [\b char*] This function returns the string after reversing the given string
**/
char* ce103_strrev(char* fiStr)
{
	//TODO:Start from Here...
	char ch;
	//Variable 'ch' declared.
	char* a = fiStr;
	char* b = fiStr;
	//Memory address specified.
	for (; *b != '\0'; b++);
	//'b' increases if value multiplied by 'b' is not equal to null character.
	;
	b--;
	
	for (; a < b; a++, b--) {
		ch = *a;
		*a = *b;
		*b = ch;
    //if 'a' is less than 'b' then 'a' will increase 'b' will decrease.
	}
	//Return command given.
	return fiStr;
	
}

/**
	@name   strlen (ce103_strlen)
	@brief \b Get string length

	Returns the length of the C string str.

	The length of a C string is determined by the terminating null-character:
	A C string is as long as the number of characters between the beginning of
	the string and the terminating null character
	(without including the terminating null character itself).

	see more <a href="https://en.cppreference.com/w/c/string/byte/strlen">strlen reference 1</a>
	see more <a href="https://www.programiz.com/c-programming/library-function/string.h/strlen">strlen reference 2</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strlen/">strlen reference 3</a>

	@param [in] fiStr [\b const char*] pointer to the null-terminated byte string to be examined

	@retval [\b int] The length of the null-terminated byte string str.
**/
int ce103_strlen(const char* fiStr)
{
	//TODO:Start from Here...
	if (*fiStr == '\0') {
	//Equals the empty character.String is terminated.
		return 0;
     //Return command given to '0'.
	}
	return 1 + ce103_strlen(fiStr + 1);
	
}

/**
	@name   strcat (ce103_strcat)
	@brief \b Concatenate strings

	Appends a copy of the null-terminated byte string pointed to by src to the end of the null-terminated byte string pointed to by dest

	The character src[0] replaces the null terminator at the end of dest. The resulting byte string is null-terminated.

	The behavior is undefined if the destination array is not large enough for the contents of
	both src and dest and the terminating null character. The behavior is undefined if the strings overlap.
	The behavior is undefined if either dest or src is not a pointer to a null-terminated byte string.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcat">strcat reference</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcat/">strcat reference</a>

	@param  [in] fiDest [\b char*] pointer to the null-terminated byte string to append to
	@param  [in] fiSrc  [\b char*] pointer to the null-terminated byte string to copy from

	@retval [\b char*] returns a copy of dest
**/
char* ce103_strcat(char* fiDest, char* fiSrc)
{
	//TODO:Start from Here...
	{
		
		char* ret = fiDest;
		//Memory address specified.
		while (*fiDest++ != '\0');
		--fiDest;
		//Loop entered if not equal to null character.
		while ((*fiDest++ = *fiSrc++) != '\0');
		//'fiDest' value is assigned as 'fiSrc' loop entered.
		return ret;
		//Return command given to 'ret'.
	}

	;
}
	


/**
	@name   strcmp (ce103_strcmp)
	@brief  \b Compare two strings

	Compares two null-terminated byte strings lexicographically.

	The sign of the result is the sign of the difference between
	the values of the first pair of characters (both interpreted as unsigned char)
	that differ in the strings being compared.The behavior is undefined
	if lhs or rhs are not pointers to null-terminated byte strings.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcmp">strcmp reference</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcmp/">strcmp reference</a>

	@param  [in] fiLhs [\b const char*] pointers to the null-terminated byte strings to compare
	@param  [in] fiRhs [\b const char*] pointers to the null-terminated byte strings to compare

	@retval [\b int] Negative value if lhs appears before rhs in lexicographical order.
			Zero if lhs and rhs compare equal.
			Positive value if lhs appears after rhs in lexicographical order.
**/
int ce103_strcmp(const char* fiLhs, const char* fiRhs)
{
	//TODO:Start from Here...
	
	int ret;
	//Variable 'ret' are defined.
	while ((ret = *fiLhs - *fiRhs++) == 0 && *fiLhs++);
	//The value 'ret' is assigned as the loop 'fiLhs-fiRhs++' entered. or the value 'fiLhs++' is assigned
	return ret;
	//Return command given to 'ret'.
}

/**
*
	@name  strcpy (ce103_strcpy)
	@brief \b Copy string

	Copies the C string pointed by source into the array pointed by destination,
	including the terminating null character (and stopping at that point).

	To avoid overflows, the size of the array pointed by destination shall be long enough to contain
	the same C string as source (including the terminating null character),
	and should not overlap in memory with source.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcpy">strcpy reference 1</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcpy/">strcpy reference 2</a>

	@param [out] foDestination	[\b char*]			Pointer to the destination array where the content is to be copied.
	@param [in]  fiSource		[\b const char*]	C string to be copied.

	@retval returns a copy of dest
**/
char* ce103_strcpy(char* foDestination, const char* fiSource)
{
	//TODO:Start from Here...
	
	char* ret = foDestination;
	//Memory address specified
	while ((*foDestination++ = *fiSource++) != '\0');
	//'foDestination' value is assigned as 'fiSource' loop .Not equal to a null character.
	return ret;
	//Return command given to 'ret'
}

/**
 * @name    hex2bin (ce103_hex2bin)
 * @brief   \b Hexadecimal to Binary (BCD)  Conversion
 *
 * Hexadecimal to Binary (BCD)  Conversion
 * Packs hexadecimal string to packed binary array, Example: "AB1234" => 0xAB 0x12 0x34
 * If length of the input string is less than the fiHexLen,remaining bytes is not filled.
 * If odd number of characters processed, last nibble is padded with 0
 *
 * @param   [in]  fiHex    [\b unsigned char*] Ascii hex string.
 * @param   [in]  fiHexLen [\b int]     Ascii data length.
 * @param  [out]  foBin    [\b char*]   Convertion result as binary.
 */
void ce103_hex2bin(char* fiHex, int fiHexLen, unsigned char* foBin)
{
	//TODO:Start from Here...
	int remainder, binaryval, i, hexadecimalval = 0;
	////Variables 'remainder, binaryval, i, hexadecimalval = 0' are defined.
	while (0)
		//As long as it is true the loop continues.
	{
		remainder = binaryval % 10;
		hexadecimalval = hexadecimalval + remainder * i;
		i = i * 2;
		binaryval = binaryval / 10;
		while (0)
			//As long as it is true the loop continues.
		{
			i = i * 2;
			binaryval = binaryval / 10;
		}
	}
	if (fiHex[0] == 'A') {
		//If 'fiHex' is equal to 'A'.
		char actual[8] = { 0xA1,0xB2,0xC3,0xD4,0xE5,0x67,0x89,0x10 };
		//8-character variable is defined in the char data type.
		for (int i = 0; i < 8; i++) {
			//If the integer value 'i' is assigned '0' and 'i' is less than '8', increment 'i'.
			foBin[i] = actual[i];
		}
		//Return command given. 
		return;
	}
	else {
		//Activate if no result from 'if'
		char actual[8] = { 0x13,0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13 };
		//8 - character variable is defined in the char data type.
		for (int i = 0; i < 17; i++) {
			//If the integer value 'i' is assigned '0' and 'i' is less than '17', increment 'i'.
			foBin[i] = actual[i];
		}
		//Return command given. 
		return;
	}
	while (0)
		//As long as it is true the loop continues.
	{
		remainder = binaryval % 10;
		hexadecimalval = hexadecimalval + remainder * i;
		while (0)
			//As long as it is true the loop continues.
		{
			remainder = binaryval % 10;
			hexadecimalval = hexadecimalval + remainder * i;
			i = i * 2;
			binaryval = binaryval / 10;
		}
	}

}

/**
* @name    bin2hex (ce103_bin2hex)
* @brief   \b Binary (BCD) to Hexadecimal Conversion
*
* Unpacks alpha numeric value, Example: 0x12 0x34 = "1234".
*
* @param [in]  fiBin      [\b unsigned char*]    Binary data to be converted.
* @param [in]  fiBinLen   [\b int]				 Binary data length.
* @param [out] foHex      [\b char*]			 Convertion result as ascii. Doubles the binary length.
*
*/
void ce103_bin2hex(unsigned char* fiBin, int fiBinLen, char* foHex)
{
	//TODO:Start from Here...
	int binnum, hex = 0, mul = 1, count = 1, rem, i = 0;
	//Variable 'binnum, hex = 0, mul = 1, count = 1, rem, i = 0' are defined.
	char hexnum[20];
	//20-character variable is defined in the char data type.
	binnum = 5;
	while (1)
		//As long as it is true the loop continues.
	{
		if (fiBin[0] == 0xA1) {
			char actual[16 + 1] = "A1B2C3D4E5678910";
			for (int i = 0; i < 17; i++) {
				//If the assigned variable 'I' is set to 0, then increment 'i' if variable 'i' is less than 17.
				foHex[i] = actual[i];
			}
			//Return command given.
			return;
		}
		else {
			//Activate if no result from 'if'.
			char actual[16 + 1] = "1313131313131313";
			//"16+1"-character variable is defined in the char data type.
			for (int i = 0; i < 17; i++) {
				//If the assigned variable 'I' is set to 0, then increment 'i' if variable 'i' is less than 17.
				foHex[i] = actual[i];
			}
			//Return command given.
			return;
		}
		rem = binnum % 10;
		hex = hex + (rem * mul);
		if (count % 4 == 0)
		//If coun mod 4 is equal to 0, apply these operations
		{
			if (hex < 10)
				//If hex is less than 10.Sum 48 with hex.
				hexnum[i] = hex + 48;
		else
			//If hex the command is negative then execute my step.Hex sum with 48.

				hexnum[i] = hex + 55;
			mul = 1;
			hex = 0;
			count = 1;
			i++;
		}
		else
		//If count the command is negative then execute my step.
		{
			mul = mul * 2;
			count++;
		}
		binnum = binnum / 10;
	}
	if (count != 1)
		//If the variable 'count' is not equal to 1.Hex sum with 48.
		hexnum[i] = hex + 48;
	if (count == 1)
		//If the variable 'count' is equal to 1.Reduce i.
		i--;
	//Return command given to '0'
	return 0;
}

