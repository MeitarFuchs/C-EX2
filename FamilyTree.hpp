
#include <iostream>
#include <string>

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

    };


    class Tree
    {
        NodeTree *root; //private

    public:
        Tree (string name);

        Tree addFather(string child , string father);
        Tree addMother(string child , string mother);

        string relation(string name);
        string find(string name);
        void display();
        void remove(string name);

        string toString();

    };


};
