//============================================================================
// Name        : Arbre.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Skill_Tree_ET.hpp"
using namespace std;



inline Arbre::Arbre(){

	skillName="";
	skillPoint=0;
	leftChild=NULL;
	rightChild=NULL;
	nodeCounter=0;
	treeCounter=0;

}

inline void Arbre::setLeftChild(Arbre* left){
	leftChild=left ;
}

inline void Arbre::setRightChild(Arbre* right){
	rightChild=right ;
}

inline void Arbre::levelUpSkill(){
	skillPoint += 1;
}

inline void Arbre::setName(string newName){
	skillName=newName;
}

inline void Arbre::reset(){
	skillPoint = 0;
}

inline int Arbre::getDepth(){
	int (leftChild == NULL && rightChild == NULL);
		return 0;
	while(leftChild || rightChild != NULL){
		leftChild += 1;
		rightChild += 1;
		nodeCounter ++;
	}
}

inline void Arbre::display(){
	cout << console.log(Arbre) << endl;
}
