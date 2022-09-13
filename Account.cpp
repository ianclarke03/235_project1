#include <iostream>
#include "Account.hpp"
#include <vector>
#include <string>
#include "Post.hpp"
//#include "Post.cpp"


Account::Account(){
    usnm = "";
    pswd = "";

    //Sets the vector of posts to an empty vector
    posts.clear();
}


Account::Account(std::string username, std::string password){
    usnm = username;
    pswd = password;

    //Sets the vector of posts to an empty vector
    posts.clear();
}


//@param a reference to the username of the Account
void Account::setUsername(std::string newusnm){
    usnm = newusnm;
}

//@return the username of the Account
std::string Account::getUsername() const{
    return usnm;
}

//@param a reference to the password of the Account
void Account::setPassword(std::string newpswd){
    pswd = newpswd;
}

//@return the password of the Account
std::string Account::getPassword() const{
    return pswd;
}

/*
      @param title   : A reference to the title used to generate the Post object
      @param body    : A reference to the body used to generate the Post object
      @post         : generates a Post with the given title and body and adds it to it's vector of posts
      @return       : Will return true if the Post does not have an empty title or body and the Post is successfully added to the vector
      */
bool Account::addPost(std::string tle, std::string bdy){

    bool yur; //declare a boolean variable to output
    int s = posts.size(); // using this variable and int q to determine if the post has successfully been added to the vector, q should be 1 more than s
    Post apost(tle, bdy); //generates a post with the given title and body
    posts.push_back(apost); //adding this new post into the posts vector
    int q = posts.size(); // using this int to see if the posts vector is 1 post bigger

    if(  tle != "" && bdy != "" && q == (s + 1)   ) //if title and body of new post not empty and posts vector is 1 bigger than before
        yur = true;
    else
        yur = false;

    return yur;

}




//@post : Prints the vector of Posts using their display function
void Account::viewPosts(){

    
    for(auto x : posts){
        std::cout << x.displayPost();
        std::cout << std::endl;
    }


}


