/*

Name: Chance Bradford

Class: CptS 122, Fall 2022; Lab Section 05

Programming Assignment 3: Digital Music Manager & Doubly Linked Lists

Date: 9/12/2022

Description: This program creates a digital music manager

*/
#ifndef _PA3_H_
#define _PA3_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // printf (), scanf (), fgets (), fputs ()
#include <stdlib.h> // malloc (), calloc (), realloc (), free (), atoi ()
#include <string.h> // strlen (), strcpy (), strncpy (), strcat (), strcmp (), strtok ()
#include <windows.h> // sleep()
#include <time.h> // srand()

typedef struct duration // struct for song length
{
	int minutes;
	int seconds;
}Duration;

typedef struct record // struct for song data in node
{
	char artist[20];
	char album[25];
	char songTitle[25];
	char Genre[15];
	Duration songLength;
	int timesPlayed;
	int Rating;
}Record;

typedef struct node // doubly linked node
{
	Record data;
	struct node* pNext; // link
	struct node* pPrev; // backwards link
}Node;

typedef struct list // List for the doubly linked list 
{
	Node* pHead;
}List;

void printMenu(void); // finished

Node* makeNode(Record newData); // finished

int insertFront(Node** pList, Record newData); // finished

int getInput(void); // finished

void printList(Node* pHead); // finished

void load(FILE* infile, Node** pList); // works but only loads once

void store(Node** pList); // finished

void display(Node* pList); // finished

void insert(Node** pList); // finished

void delete(Node** pList); // finished

void edit(Node** pList); // works until there's more than one song record per artist

void sort(Node** pList); // finished

void rate(Node** pList); // finished

void play(Node* pList); // finished

void shuffle(Node* pList); // finished 

void Exit(Node** pList); // exits but doesnt store current list to the file


#endif