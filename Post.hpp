#pragma once
#include <time.h>
#include <string>
#include <ctime>

class Post {
    private:
    
        std::string title;
        std::string body;
        time_t rawtime; //the time that the post was created


    public:
    //constructors
        Post(std::string tle, std::string bdy);
        /**
      Parameterized constructor.
      @param title  : The title of the post
      @param body   : The body content of the post
      Sets the title and body of the Post to what was passed by the user
      Will also generate the current time and store it
   */



    //setters/getters

        /**
         * @param  : a reference to title of the Post
         * */
        void setTitle(std::string newtitle);

        /**
        @return : the title of the Post
        */
        const std::string getTitle();


        /**
         @param  : a reference to body of the Post
        */
        void setBody(std::string newbody);


        /**
        @return : the body of the Post
        */
        const std::string getBody();



        std::string getTimeStamp(); //prints the time the Post was created to the standard output as asctime(localtime(&time_stamp_))





    //Displaying

        std::string displayPost();    
        /*
      Print the Post in the following format:
      {title} posted at {time}:
      {body} 
      */

};
