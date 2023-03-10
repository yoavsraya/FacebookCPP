#pragma once
#include "Member.h"
#include "Page.h"
#include "Exceptions.h"
#include <vector>
#include <fstream>

#pragma warning(disable: 4996)

const int SIZE_OF_DATE = 11;
const int MAX_NAME_LENGTH = 50;
const int DECIMAL = 10;
const int MAX_DAY_IN_MONTH = 31;
const int MAX_MONTH_IN_YEAR = 12;
const int MIN_DAY_IN_MONTH = 1;
const int MIN_MONTH_IN_YEAR = 1;
const int THE_YEAR_JESUS_BORN = 1;
const int MAX_TEXT_LENGTH = 500;

class Facebook
{
public:
	void printMembers()const; //print All members
	void printPages()const; //print All pages
	Facebook();//Ct'or
	~Facebook();//Dt'or
	void addMember(member* const other); // add new member to facebook 
	void removeMember(const int index); // remove facebook friend (not in use for now)
	void addPage(page* other); // add new page to facebook
	void removePage(const int index); //remove page from facebook
	void runMenu(); // run facebook program until exit
	void printMenu()const; // print menu
	int whoAreYou()const; // return user index
	int whichOne(const int size) const; //return user index
	int whichPage()const; //return page
	void WhoisBigger()const; //use oprator > (Q2)
	bool isExsist(string name); //check if the name is already exsist
	void WriteTofile(); //write all data to txt
	void ReadFromFile(); //read all data from txt
	void createMemberFromFile(string name, string date); //create new member from file
	void createPageFromFile(char* name); // create page from file 

private:
	vector <member*> m_members;
	vector <page*> m_pages;
	
public:
	void watch_MyFriend_List()noexcept(false); //11
	void  print_All_FaceBook_Members_And_Pages() const noexcept(false); //10
	void UnlikePage()noexcept(false); //9
	void LikeNewPage()noexcept(false); //8
	void RemoveFriend()noexcept(false); //7
	void AddFriend()noexcept(false); //6
	void WhatIsMyfriend_Friends_Latest_Status()noexcept(false); //5
	void SeeAllMyStatus()noexcept(false); //4
	void  WriteNewStatus()noexcept(false); //3
	void AddNewPage()noexcept(false); //2
	void AddNewMember()noexcept(false); //1

};

