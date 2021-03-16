/*
 * Skill_Tree_RB.hpp
 *
 *  Created on: 9 mars 2021
 *      Author: GAME1.1
 */

#ifndef SKILL_TREE_ET_HPP_
#define SKILL_TREE_ET_HPP_

#include <iostream>
#include <string>

using namespace std;

class Arbre{
	public:
		void setName(string newName);
		void setLeftChild(Arbre* left);
		void setRightChild(Arbre* right);
		void levelUpSkill();
		void reset();
		int getDepth();
		void display();
		Arbre();
		~Arbre();
		Arbre(string skillName, int skillPoint);

		//arbre.getDepth();
	private:
		int nodeCounter;
		int treeCounter;
		string skillName;
		int skillPoint;
		Arbre*rightChild;
		Arbre*leftChild;
};






#endif /* SKILL_TREE_RB_HPP_ */
