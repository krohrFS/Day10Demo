#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Example.cpp"


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

    /*
        Question: Difference between class fields and local variables

        Answer: We'll need to create a class to make the fields to see the difference. So after break we'll
        make a class and go through it.
    
    
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
    *   mkdir - makes directory - creates a folder
    *       mkdir folderName
    *       Note that command line does not like spaces so if you want to use spaces encapsulate your folder name in quotes
    * 
    * 
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
    *       Make sure we're saving files before we do the git add
    * 
    *   git commit -m "message goes here"
    *       Sets up a commit ready to be pushed
    * 
    * 
    *   Order of operations
    *   Do some Work -> Save your files -> git add -A -> git commit -m "a message goes here" -> git push github master
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
    *   git pull demo
    * 
    *   We need a few commands first but the url we will be pulling is
    * 
    *   https://github.com/krohrFS/Text-Based-RPG
    * 
    *   It's best practice to keep one project to one folder so we'll end up making a new folder to contain this new project from Github
    *   
    *   Make sure you're in the repos folder
    *       /c/Users/YOURUSERNAME/source/repos
    * 
    *   Make a new directory
    *       mkdir "RPG DEMO"
    * 
    *   Change directory to that folder
    *       cd "RPG DEMO"
    * 
    *   Make a local git repository
    *       git init
    * 
    *   Create the connection from local repo to remote repo
    *       git remote add github URLGOESHERE
    * 
    *   Confirm the connection was made
    *       git remote -v
    * 
    *   Pull the project from github
    *       git pull github master
    * 
    *   And there you have a project downloaded/pulled from githun
    * 
    * 
    *   
    
    */
    std::cout << "testing add and commit" << std::endl;


    int x = 3;


    // Made an in x varaible and assigned it the value of 3



    // Writing to a file
    // utilizing ofstream from fstream library
    std::ofstream myFile; 

    myFile.open("day10demotextfile.txt"); // opens the file for use by the program, the file won't open like if you were to double click a .txt or .doc file
    // What I'm testing here is if the file has to already been made or if it will make it
    // Some libraries will do one or the other, some do both

    // We want to write something in the file
    myFile << "This will overwrite what we currently have\n"; // we insert this text into the myFile object which will write to the text file that is currently open
    // remember that the \n is an escape character to make a new line

    myFile.close(); // closes the file




    // Append example
    // Start with creating a ofstream object
    std::ofstream appFile;

    // open the file you want to append like before but we'll be adding a new argument to the open method
    appFile.open("day10demotextfile.txt", std::ios_base::app);
    appFile << "New line to be appended\n";
    appFile << "Third line that gets added\n";
    appFile.close();



    // Open file to read
    std::ifstream readFile("day10demotextfile.txt");

    // Reading from a file

    std::string readFromFile = "";

    while (std::getline(readFile, readFromFile))
    {
        std::cout << readFromFile << std::endl;
    }

    readFile.close();



    /*
        Use cases of this type of thing from the past is if we think games
        We can immediately think of save states in various forms, the first that comes to mind is the original 
        Mega Man series when you wanted to be done or take a break, if you closed out of the game or returned to the menu
        a code would be generated that you would write down and when you go back to playing if you wanted to go back to a state
        of game that was similar or exact to what you had you would put this code in and it would take you to where you were
        this is because actual game saves were not a thing in the past

        More recent example of what not to do
        Major retailers have had a bad habbit of storing passwords in plain text (not encrypted) in text files that were "easily" accessible
        on their servers, now there are reasons to store xyz types of data in a text file, but paswords are not it, 

        Other current examples
        Changing settings in games that are stored locally on your machine that are not displayed to the user in game
        i.e Minecraft Java Edition locally hosted servers, you need to set player count, white list, black list, motd
        things of that nature



    
    */





}

