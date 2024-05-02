/****************************************************
 *  * C++ Program To Implement Reversal of string
 ****************************************************/
# include <iostream>
# include <cstdlib>
# include <cctype>
# include <string>
 using namespace std;


/* Function Prototype */
void reverse (string  fromstr, char * tostr)
{
	int i;
	int j;
	int len;
	
	len = fromstr.length(); 
	
	for (j = len, i = 0; j >= 0; j--, i++) /* Reverse loop */
		tostr[i] = fromstr[j];
	tostr[len]='\0';
}


int main ()
{
	char  str[100] ; /* Buffer to hold reversed string */
	reverse ("because", str); /* Reverse the string "cat" */
	cout <<"reverse (\"cat\") = "<< str << endl; /*         Display */
	reverse ("noon", str); /* Reverse the string "noon" */
	cout <<"reverse (\"noon\") = "<< str << endl; /*         Display */
}
