#pragma once
#include <string>
#include <vector>
#include "Post.hpp"
//#include "Post.cpp"


  class Account{

    private:
        std::string usnm;
        std::string pswd;
        std::vector<Post> posts;

    public:
        Account();

        Account(std::string username, std::string password);

        //@param a reference to the username of the Account
        void setUsername(std::string newusnm);

        //@return the username of the Account
        const std::string getUsername();

        //@param a reference to the password of the Account
        void setPassword(std::string newpswd);

        //@return the password of the Account
        const std::string getPassword();


      /*
      @param title   : A reference to the title used to generate the Post object
      @param body    : A reference to the body used to generate the Post object
      @post         : generates a Post with the given title and body and adds it to it's vector of posts
      @return       : Will return true if the Post does not have an empty title or body and the Post is successfully added to the vector
      */
        bool addPost(std::string tle, std::string bdy);
        
        //@post : Prints the vector of Posts using their display function
         void viewPosts();


  };


   
    

   
