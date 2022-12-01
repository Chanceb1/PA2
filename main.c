/*

Name: Chance Bradford

Class: CptS 122, Fall 2022; Lab Section 05

Programming Assignment 3: Digital Music Manager & Doubly Linked Lists

Date: 9/12/2022

Description: This program creates a digital music manager

*/

#include "PA3.h"


int main()
{
	FILE* infile = NULL;

	infile = fopen("musicPlayList.csv", "r"); // opens musicPlaylist file for reading
	// can use r+ instead of r or w and r+ reads and writes to file

	int i = 0;

	Node* pHead = NULL;

	if (infile != NULL)
	{
		// while loop is the Digital Music Manager running
		while (i >= 0 && i <= 11)// reprints menu until exit command is selected
		{
			printMenu();
			i = getInput();

			if (i == 1) // load songs
			{
				system("cls");
				load(infile, &pHead);
				system("pause");
				system("cls");
			}
			else if (i == 2) // store songs
			{
				system("cls");
				store(&pHead);
				system("pause");
				system("cls");
			}
			else if (i == 3) // display songs
			{
				system("cls");
				display(pHead);
				system("pause");
				system("cls");
			}
			else if (i == 4) // insert song
			{
				system("cls");
				insert(&pHead);
				system("pause");
				system("cls");
			}
			else if (i == 5) // delete song
			{
				system("cls");
				delete(&pHead);
				system("pause");
				system("cls");
			}
			else if (i == 6) // edit song
			{
				system("cls");
				edit(&pHead);
				system("pause");
				system("cls");
			}
			else if (i == 7) // sort songs
			{
				system("cls");
				sort(&pHead);
				system("pause");
				system("cls");
			}
			else if (i == 8) // rate song
			{
				system("cls");
				rate(&pHead);
				system("pause");
				system("cls");
			}
			else if (i == 9) // play songs
			{
				system("cls");
				play(pHead);
				system("pause");
				system("cls");
			}
			else if (i == 10) // shuffle songs
			{
				system("cls");
				shuffle(pHead);
			}
			else if (i == 11) // exit program
			{
				system("cls");
				exit(&pHead);
			}
		}
	}
	
	fclose(infile);

	return 0;
}