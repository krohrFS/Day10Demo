#include <iostream>
#include <string>
#include <vector>


/*

    CONTACT METHODS
    Email: krohr@fullsail.com
    Discord: karlrohr

    Remember to ask questions often.

*/

int main()
{
    std::cout << "Day 10 - Future Content\n";



    /*
        Question: Is there any situations where a while loop is better than a for loop.

        Answer: While loops are used for when you "don't know" the end point or don't have a defined end point (even though
        you can make them work that way easily. When you prompt a user for some data, and you give them specific options, the 
        user is always going to be prone to err, they will type garbage input that means nothing to your code, so you can have a 
        loop that is while (userInput == something I ask for) and the loop will continue until they provide some thing that
        I ask for. For loops are for when I do "know" the end point of my loop, they are typially sequential or counting loops
        used for going through collections or data sets.
    */

    /*  Version Control
    *   git and github
    * 
    *   git is a local software that exists on your machine, it is typically done with command line (which is what we are going to be doing today)
    *   github is a website that you'll have to go to, and make an account if you don't already have one
    *   I recommend using your student email
    * 
    *   https://www.github.com
    *   Make an account here with your student email  
    * 
    * 
    *   https://git-scm.com/downloads/win
    *   Go here and download this, top download option, go through the install process and leave everything default
    * 
    *   Command Line commands
    *   pwd - print working directory
    *       this prints the path to the folder you are currently in
    * 
    *   ls - prints out everything inside of that folder
    *       There are sub options that are used by this as well
    * 
    *   ls -la - prints out everything inside the folder differently formatted
    * 
    *   cd - change directory - must know relative path or true path
    *       .. option changes directory to the parent directory
    *       ~/ alias for user folder path
    *           cd ~/Documents would take you to the C://users/userName/Documents
    * 
    * 
    *   Git Commands
    *   git init
    *       Starts a local git repo that we can later connect to a remote repo (github)
    * 
    *   git remote add alias URLGOESHERE
    *       this line sets up a connection to a remote repo (github in this case) 
    * 
    *   git remote -v
    *       shows all connections
    * 
    *   git status
    *       We can see folders/files that have changes that are ready for commits
    * 
    *   git help
    *       shows available commands
    * 
    *   git add -A
    *       Adds all files that have been editted to a "staging" area - makes them ready to commit
    * 
    *   git commit -m "message goes here"
    *       Sets up a commit ready to be pushed
    * 
    * 
    *   To Set up Global credentials to push/pull from github
    *   git --global user.email yourEmail@here.com
    * 
    *   git --global user.password yourPassWordHere
    * 
    *   The first time you go to push or pull from Github via Git Command Line you may get a Github pop up
    *   that asks you to login as well, go ahead and go through that login process
    * 
    * 
    * 
    *
    * 
    * 
    *   
    
    */
    std::cout << "testing add and commit" << std::endl;


    int x = 3;


    // Made an in x varaible and assigned it the value of 3



}

