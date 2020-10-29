#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//create function that will reverse the positions of the characters within the arrray
char* reverseString(char* pString)
{
	//creating the pointers that point to the values in the front of the array and end of the array pstring is the pointer to the original string
	char* front = pString;
	//strlen is the length of the string-1 because the last value in the string index is null and we dont want to count null
	char* rear = front + strlen(pString) - 1;
	//while loop that will move values from the front copy it to a temp location shift the value at the end to the front then copy the temp into the end and repeat//
	while (rear > front)
	{

		char temp = *front;
		*front = *rear;
		*rear = temp;
		front++;
		rear--;
	}
	return pString;
}



//print the result
int main()
{
	//enter string here
	char str[1000] = "HelloEveryone";
	cout << str;
	cout << "\n";
	cout << reverseString(str);
	return 0;
}
