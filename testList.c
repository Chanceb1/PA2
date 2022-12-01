/*

Name: Chance Bradford

Class: CptS 122, Fall 2022; Lab Section 05

Programming Assignment 3: Digital Music Manager & Doubly Linked Lists

Date: 9/12/2022

Description: This program creates a digital music manager

*/

#include "testList.h"

void testInsert(void) // tests the inserting node aspect of the insert function
{
	Node *testNode = NULL;
	Record newRecord;
	int success = 0;

	 strcpy(newRecord.artist, "Perry, Katy");
	 strcpy(newRecord.album, "Witness");
	 strcpy(newRecord.songTitle, "Chained to the Rhythm");
	 strcpy(newRecord.Genre, "Pop");
	 newRecord.songLength.minutes = 4;
	 newRecord.songLength.seconds = 36;
	 newRecord.timesPlayed = -1;
	 newRecord.Rating = 6;

	 success = insertFront(&testNode, newRecord);

	 if (testNode != NULL) // successfully inserted new node
	 {
		 if (strcmp(testNode->data.artist, "Perry, Katy") == 0)
		 {
			 printf("the data in the top node matches our test data - passed part of test\n");

			 if (success == 1)
			 {
				 printf("success was set - all parts of test passed!\n");
			 }
			 else
			 {
				 printf("success was not set - failed part of test\n");
			 }
		 }
		 else
		 {
			 printf("the data in the top node doesn't match our test data - failed part of test\n");
		 }
		
	 }
	 else // did not insert new record into list succesffully
	 {
		 printf("Did not insert successfully\n");
	 }
}

void testDelete(void)
{
	Node* testNode = malloc(sizeof(Node));

	strcpy(testNode->data.artist, "Perry, Katy");
	strcpy(testNode->data.album, "Witness");
	strcpy(testNode->data.songTitle, "Chained to the Rhythm");
	strcpy(testNode->data.Genre, "Pop");
	testNode->data.songLength.minutes = 4;
	testNode->data.songLength.seconds = 36;
	testNode->data.timesPlayed = -1;
	testNode->data.Rating = 6;

	delete(testNode);

	if (testNode == NULL) // test for sucessfull deletion
	{
		printf("Succesfully deleted node\n");
	}
	else
	{
		printf("Did not successfully de allocate test node\n");
	}

}

void testShuffle(void)
{
	// play 3 songs 
	Node* testNode = malloc(sizeof(Node));
	Node* testNode2 = malloc(sizeof(Node));
	Node* testNode3 = malloc(sizeof(Node));
	Record newRecord;
	Record newRecord2;
	Record newRecord3;

	strcpy(newRecord.artist, "Perry, Katy");
	strcpy(newRecord.album, "Witness");
	strcpy(newRecord.songTitle, "Chained to the Rhythm");
	strcpy(newRecord.Genre, "Pop");
	newRecord.songLength.minutes = 4;
	newRecord.songLength.seconds = 36;
	newRecord.timesPlayed = -1;
	newRecord.Rating = 6;

	strcpy(newRecord2.artist, "Alice In Chains, ");
	strcpy(newRecord2.album, "Dirt");
	strcpy(newRecord2.songTitle, "Would");
	strcpy(newRecord2.Genre, "Rock");
	newRecord2.songLength.minutes = 2;
	newRecord2.songLength.seconds = 42;
	newRecord2.timesPlayed = 6;
	newRecord2.Rating = 5;

	strcpy(newRecord3.artist, "Pantera");
	strcpy(newRecord3.album, "broken");
	strcpy(newRecord3.songTitle, "Cowboys from Hell");
	strcpy(newRecord3.Genre, "metal");
	newRecord3.songLength.minutes = 3;
	newRecord3.songLength.seconds = 22;
	newRecord3.timesPlayed = 3;
	newRecord3.Rating = 4;

	insertFront(&testNode, newRecord);
	insertFront(&testNode2, newRecord2);
	insertFront(&testNode3, newRecord3);

	if (testNode3 != NULL) // test to see if list is not null
	{
		shuffle(testNode3); // play the three songs
	}
	else
	{
		printf("test for shuffle failed\n");
	}

}

