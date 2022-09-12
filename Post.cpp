#include <iostream>
#include "Post.hpp"
#include <time.h>
#include <string>
#include <ctime>


Post::Post(std::string tle, std::string bdy){
    
    title = tle;
    body = bdy;

    // current date/time based on current system
    rawtime = time(0);
}



void Post::setTitle(std::string newTitle){
    title = newTitle;
}



std::string Post::getTitle(){
    return title;
}


void Post::setBody(std::string newbody){
    body = newbody;
}


std::string Post::getBody(){
    return body;
}



std::string Post::getTimeStamp(){

    return asctime( localtime (&rawtime) );


} //prints the time the Post was created to the standard output as asctime(localtime(&time_stamp_))





std::string Post::displayPost(){
    
    return (title + " posted at " + asctime( localtime (&rawtime) ) + "\n" + body + "\n");

}
