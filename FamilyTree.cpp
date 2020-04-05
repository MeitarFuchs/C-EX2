    #include "FamilyTree.hpp"
    #include <stdio.h>
    #include <iostream>

    using namespace std;
    namespace family
    {

        class NodeTree
                {
                    public:
                    NodeTree *mother; // rigth
                    NodeTree *father; // left
                    string myName;
                    NodeTree (string name);

                }


        class Tree
                {
                    NodeTree *root; //private

                    public:
                    Tree() {;}
                    Tree (string name){ ;  }

                    Tree addFather(string child , string father)
                    {return this;}
                    Tree addMother(string child , string mother)
                    {return this;}

                    string relation(string name)
                    {return "";}
                    string find(string name);
                    {return "";}
                    void display();
                    Node remove(string s);
                    {return this;}

                    string toString();

                }


    }