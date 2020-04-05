    #include "FamilyTree.hpp"
    #include <stdio.h>
    #include <iostream>

    using namespace std;

    namespace family
    {
        NodeTree::NodeTree (string name)
        {
            this->myName = name;
        }

        Tree::Tree (string name)
        {
            NodeTree node(name);
            this->root = &node;
        }
        Tree Tree::addFather(string child , string father)
        {   Tree t("Josh") ;
            return t; }
        Tree Tree:: addMother(string child , string father)
        {   Tree t("meitar");
        return t;}
        string relation(string name)
        {return "k";}
        string find(string name)
        {return "k";}

        void remove(string name)
        {;}
        void display()
        {;}
        string toString() // for the diplay function
        {return "k";}
    
    };